import 'package:flutter/material.dart';
import 'package:provider/provider.dart';
import '../../services/auth_service.dart';
import '../../services/ride_service.dart';
import '../../models/ride.dart';
import '../../utils/constants.dart';
import '../../utils/helpers.dart';

class SearchRidesScreen extends StatefulWidget {
  const SearchRidesScreen({super.key});

  @override
  State<SearchRidesScreen> createState() => _SearchRidesScreenState();
}

class _SearchRidesScreenState extends State<SearchRidesScreen> {
  final _fromController = TextEditingController();
  final _toController = TextEditingController();
  DateTime? _selectedDate;
  int _requiredSeats = 1;
  List<Ride> _searchResults = [];
  bool _hasSearched = false;

  @override
  void initState() {
    super.initState();
    _loadAvailableRides();
  }

  @override
  void dispose() {
    _fromController.dispose();
    _toController.dispose();
    super.dispose();
  }

  void _loadAvailableRides() {
    final rideService = context.read<RideService>();
    setState(() {
      _searchResults = rideService.availableRides;
      _hasSearched = true;
    });
  }

  Future<void> _searchRides() async {
    final rideService = context.read<RideService>();
    
    final results = await rideService.searchRides(
      fromLocation: _fromController.text.trim(),
      toLocation: _toController.text.trim(),
      departureDate: _selectedDate,
      requiredSeats: _requiredSeats,
    );

    setState(() {
      _searchResults = results;
      _hasSearched = true;
    });
  }

  Future<void> _selectDate() async {
    final date = await showDatePicker(
      context: context,
      initialDate: DateTime.now(),
      firstDate: DateTime.now(),
      lastDate: DateTime.now().add(const Duration(days: 30)),
    );
    
    if (date != null) {
      setState(() => _selectedDate = date);
    }
  }

  Future<void> _bookRide(Ride ride) async {
    final authService = context.read<AuthService>();
    final rideService = context.read<RideService>();
    final user = authService.currentUser;
    
    if (user == null) return;

    // Show confirmation dialog
    final confirmed = await showDialog<bool>(
      context: context,
      builder: (context) => AlertDialog(
        title: const Text('Confirm Booking'),
        content: Column(
          mainAxisSize: MainAxisSize.min,
          crossAxisAlignment: CrossAxisAlignment.start,
          children: [
            Text('Route: ${ride.fromLocation} → ${ride.toLocation}'),
            Text('Time: ${AppHelpers.formatDateTime(ride.departureTime)}'),
            Text('Seats: $_requiredSeats'),
            Text('Price: ${AppHelpers.formatCurrency(ride.pricePerSeat * _requiredSeats)}'),
            const SizedBox(height: 8),
            Text(
              'You save ${AppHelpers.formatCurrency(ride.savings * _requiredSeats)} compared to market price!',
              style: const TextStyle(
                color: Colors.green,
                fontWeight: FontWeight.bold,
              ),
            ),
          ],
        ),
        actions: [
          TextButton(
            onPressed: () => Navigator.pop(context, false),
            child: const Text('Cancel'),
          ),
          ElevatedButton(
            onPressed: () => Navigator.pop(context, true),
            child: const Text('Confirm'),
          ),
        ],
      ),
    );

    if (confirmed == true && mounted) {
      final success = await rideService.bookRide(
        rideId: ride.id,
        passengerId: user.id,
        seatsToBook: _requiredSeats,
      );

      if (success && mounted) {
        ScaffoldMessenger.of(context).showSnackBar(
          const SnackBar(
            content: Text('Ride booked successfully!'),
            backgroundColor: Colors.green,
          ),
        );
        _searchRides(); // Refresh results
      } else if (mounted) {
        ScaffoldMessenger.of(context).showSnackBar(
          SnackBar(
            content: Text(rideService.error ?? 'Failed to book ride'),
            backgroundColor: Colors.red,
          ),
        );
      }
    }
  }

  @override
  Widget build(BuildContext context) {
    return Scaffold(
      appBar: AppBar(
        title: const Text('Search Rides'),
      ),
      body: Column(
        children: [
          // Search Form
          Container(
            padding: const EdgeInsets.all(Constants.spacing),
            decoration: BoxDecoration(
              color: Theme.of(context).cardColor,
              boxShadow: [
                BoxShadow(
                  color: Colors.black.withOpacity(0.05),
                  blurRadius: 10,
                  offset: const Offset(0, 2),
                ),
              ],
            ),
            child: Column(
              children: [
                Row(
                  children: [
                    Expanded(
                      child: TextField(
                        controller: _fromController,
                        decoration: const InputDecoration(
                          labelText: 'From',
                          prefixIcon: Icon(Icons.location_on),
                        ),
                      ),
                    ),
                    const SizedBox(width: 8),
                    Expanded(
                      child: TextField(
                        controller: _toController,
                        decoration: const InputDecoration(
                          labelText: 'To',
                          prefixIcon: Icon(Icons.flag),
                        ),
                      ),
                    ),
                  ],
                ),
                const SizedBox(height: Constants.spacing),
                
                Row(
                  children: [
                    Expanded(
                      child: InkWell(
                        onTap: _selectDate,
                        child: Container(
                          padding: const EdgeInsets.symmetric(
                            horizontal: 12,
                            vertical: 16,
                          ),
                          decoration: BoxDecoration(
                            border: Border.all(color: Colors.grey),
                            borderRadius: BorderRadius.circular(12),
                          ),
                          child: Row(
                            children: [
                              const Icon(Icons.calendar_today),
                              const SizedBox(width: 8),
                              Text(
                                _selectedDate != null
                                    ? AppHelpers.formatDate(_selectedDate!)
                                    : 'Any Date',
                              ),
                            ],
                          ),
                        ),
                      ),
                    ),
                    const SizedBox(width: 8),
                    Expanded(
                      child: DropdownButtonFormField<int>(
                        value: _requiredSeats,
                        decoration: const InputDecoration(
                          labelText: 'Seats',
                          prefixIcon: Icon(Icons.person),
                        ),
                        items: List.generate(Constants.maxSeatsPerRide, (index) {
                          final seats = index + 1;
                          return DropdownMenuItem(
                            value: seats,
                            child: Text('$seats seat${seats > 1 ? 's' : ''}'),
                          );
                        }),
                        onChanged: (value) {
                          if (value != null) {
                            setState(() => _requiredSeats = value);
                          }
                        },
                      ),
                    ),
                  ],
                ),
                const SizedBox(height: Constants.spacing),
                
                SizedBox(
                  width: double.infinity,
                  child: ElevatedButton(
                    onPressed: _searchRides,
                    child: const Text('Search Rides'),
                  ),
                ),
              ],
            ),
          ),

          // Search Results
          Expanded(
            child: _hasSearched
                ? _searchResults.isEmpty
                    ? const Center(
                        child: Column(
                          mainAxisAlignment: MainAxisAlignment.center,
                          children: [
                            Icon(
                              Icons.search_off,
                              size: 64,
                              color: Colors.grey,
                            ),
                            SizedBox(height: 16),
                            Text(
                              'No rides found',
                              style: TextStyle(
                                fontSize: 18,
                                fontWeight: FontWeight.bold,
                                color: Colors.grey,
                              ),
                            ),
                            SizedBox(height: 8),
                            Text(
                              'Try adjusting your search criteria',
                              style: TextStyle(color: Colors.grey),
                            ),
                          ],
                        ),
                      )
                    : ListView.builder(
                        padding: const EdgeInsets.all(Constants.spacing),
                        itemCount: _searchResults.length,
                        itemBuilder: (context, index) {
                          final ride = _searchResults[index];
                          return _RideCard(
                            ride: ride,
                            requiredSeats: _requiredSeats,
                            onBook: () => _bookRide(ride),
                          );
                        },
                      )
                : const Center(
                    child: Text('Search for rides above'),
                  ),
          ),
        ],
      ),
    );
  }
}

class _RideCard extends StatelessWidget {
  final Ride ride;
  final int requiredSeats;
  final VoidCallback onBook;

  const _RideCard({
    required this.ride,
    required this.requiredSeats,
    required this.onBook,
  });

  @override
  Widget build(BuildContext context) {
    final canBook = ride.availableSeats >= requiredSeats;
    final totalPrice = ride.pricePerSeat * requiredSeats;
    final totalSavings = ride.savings * requiredSeats;

    return Card(
      margin: const EdgeInsets.only(bottom: 12),
      child: Padding(
        padding: const EdgeInsets.all(Constants.spacing),
        child: Column(
          crossAxisAlignment: CrossAxisAlignment.start,
          children: [
            // Route and Time
            Row(
              children: [
                Expanded(
                  child: Column(
                    crossAxisAlignment: CrossAxisAlignment.start,
                    children: [
                      Text(
                        '${ride.fromLocation} → ${ride.toLocation}',
                        style: Theme.of(context).textTheme.titleMedium?.copyWith(
                              fontWeight: FontWeight.bold,
                            ),
                      ),
                      const SizedBox(height: 4),
                      Text(
                        AppHelpers.formatDateTime(ride.departureTime),
                        style: Theme.of(context).textTheme.bodyMedium?.copyWith(
                              color: Colors.grey[600],
                            ),
                      ),
                    ],
                  ),
                ),
                Column(
                  crossAxisAlignment: CrossAxisAlignment.end,
                  children: [
                    Text(
                      AppHelpers.formatCurrency(ride.pricePerSeat),
                      style: Theme.of(context).textTheme.titleLarge?.copyWith(
                            fontWeight: FontWeight.bold,
                            color: Theme.of(context).primaryColor,
                          ),
                    ),
                    Text(
                      'per seat',
                      style: Theme.of(context).textTheme.bodySmall?.copyWith(
                            color: Colors.grey[600],
                          ),
                    ),
                  ],
                ),
              ],
            ),
            const SizedBox(height: 12),

            // Savings and Seats Info
            Row(
              children: [
                Container(
                  padding: const EdgeInsets.symmetric(horizontal: 8, vertical: 4),
                  decoration: BoxDecoration(
                    color: Colors.green.withOpacity(0.1),
                    borderRadius: BorderRadius.circular(8),
                  ),
                  child: Text(
                    'Save ${AppHelpers.formatCurrency(ride.savings)}',
                    style: TextStyle(
                      color: Colors.green[800],
                      fontWeight: FontWeight.bold,
                      fontSize: 12,
                    ),
                  ),
                ),
                const Spacer(),
                Row(
                  children: [
                    Icon(
                      Icons.airline_seat_recline_normal,
                      size: 16,
                      color: Colors.grey[600],
                    ),
                    const SizedBox(width: 4),
                    Text(
                      '${ride.availableSeats} available',
                      style: Theme.of(context).textTheme.bodySmall?.copyWith(
                            color: Colors.grey[600],
                          ),
                    ),
                  ],
                ),
              ],
            ),

            if (ride.notes.isNotEmpty) ...[
              const SizedBox(height: 8),
              Text(
                ride.notes,
                style: Theme.of(context).textTheme.bodySmall?.copyWith(
                      color: Colors.grey[600],
                      fontStyle: FontStyle.italic,
                    ),
              ),
            ],

            const SizedBox(height: 12),

            // Total Price and Book Button
            Row(
              children: [
                if (requiredSeats > 1)
                  Expanded(
                    child: Column(
                      crossAxisAlignment: CrossAxisAlignment.start,
                      children: [
                        Text(
                          'Total: ${AppHelpers.formatCurrency(totalPrice)}',
                          style: const TextStyle(fontWeight: FontWeight.bold),
                        ),
                        Text(
                          'Save: ${AppHelpers.formatCurrency(totalSavings)}',
                          style: TextStyle(
                            color: Colors.green[800],
                            fontSize: 12,
                          ),
                        ),
                      ],
                    ),
                  )
                else
                  const Spacer(),
                ElevatedButton(
                  onPressed: canBook ? onBook : null,
                  child: Text(canBook ? 'Book Now' : 'Not Available'),
                ),
              ],
            ),
          ],
        ),
      ),
    );
  }
}