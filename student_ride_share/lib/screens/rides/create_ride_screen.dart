import 'package:flutter/material.dart';
import 'package:provider/provider.dart';
import '../../services/auth_service.dart';
import '../../services/ride_service.dart';
import '../../utils/constants.dart';
import '../../utils/helpers.dart';

class CreateRideScreen extends StatefulWidget {
  const CreateRideScreen({super.key});

  @override
  State<CreateRideScreen> createState() => _CreateRideScreenState();
}

class _CreateRideScreenState extends State<CreateRideScreen> {
  final _formKey = GlobalKey<FormState>();
  final _fromLocationController = TextEditingController();
  final _toLocationController = TextEditingController();
  final _notesController = TextEditingController();
  final _marketPriceController = TextEditingController();
  
  DateTime _selectedDateTime = DateTime.now().add(const Duration(hours: 1));
  int _selectedSeats = 1;

  @override
  void dispose() {
    _fromLocationController.dispose();
    _toLocationController.dispose();
    _notesController.dispose();
    _marketPriceController.dispose();
    super.dispose();
  }

  Future<void> _selectDateTime() async {
    final date = await showDatePicker(
      context: context,
      initialDate: _selectedDateTime,
      firstDate: DateTime.now(),
      lastDate: DateTime.now().add(const Duration(days: 30)),
    );
    
    if (date != null && mounted) {
      final time = await showTimePicker(
        context: context,
        initialTime: TimeOfDay.fromDateTime(_selectedDateTime),
      );
      
      if (time != null) {
        setState(() {
          _selectedDateTime = DateTime(
            date.year,
            date.month,
            date.day,
            time.hour,
            time.minute,
          );
        });
      }
    }
  }

  Future<void> _createRide() async {
    if (_formKey.currentState!.validate()) {
      final authService = context.read<AuthService>();
      final rideService = context.read<RideService>();
      final user = authService.currentUser;
      
      if (user == null) return;

      final marketPrice = double.tryParse(_marketPriceController.text) ?? 0;
      
      final success = await rideService.createRide(
        driverId: user.id,
        fromLocation: _fromLocationController.text.trim(),
        toLocation: _toLocationController.text.trim(),
        fromLatitude: 23.7275, // Mock coordinates - in real app use GPS
        fromLongitude: 90.4075,
        toLatitude: 23.7315,
        toLongitude: 90.4085,
        departureTime: _selectedDateTime,
        totalSeats: _selectedSeats,
        marketPrice: marketPrice,
        notes: _notesController.text.trim(),
      );

      if (success && mounted) {
        ScaffoldMessenger.of(context).showSnackBar(
          const SnackBar(
            content: Text('Ride created successfully!'),
            backgroundColor: Colors.green,
          ),
        );
        Navigator.pop(context);
      } else if (mounted) {
        ScaffoldMessenger.of(context).showSnackBar(
          SnackBar(
            content: Text(rideService.error ?? 'Failed to create ride'),
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
        title: const Text('Offer a Ride'),
      ),
      body: SingleChildScrollView(
        padding: const EdgeInsets.all(Constants.spacing),
        child: Form(
          key: _formKey,
          child: Column(
            crossAxisAlignment: CrossAxisAlignment.stretch,
            children: [
              // Header
              Card(
                child: Padding(
                  padding: const EdgeInsets.all(Constants.spacing),
                  child: Column(
                    children: [
                      const Icon(
                        Icons.directions_car,
                        size: 48,
                        color: Colors.green,
                      ),
                      const SizedBox(height: 8),
                      Text(
                        'Share Your Ride',
                        style: Theme.of(context).textTheme.headlineSmall?.copyWith(
                              fontWeight: FontWeight.bold,
                            ),
                      ),
                      const SizedBox(height: 4),
                      Text(
                        'Help fellow students save money while you earn',
                        style: Theme.of(context).textTheme.bodyMedium?.copyWith(
                              color: Colors.grey[600],
                            ),
                        textAlign: TextAlign.center,
                      ),
                    ],
                  ),
                ),
              ),
              const SizedBox(height: Constants.spacing),

              // Route Information
              Text(
                'Route Information',
                style: Theme.of(context).textTheme.titleLarge?.copyWith(
                      fontWeight: FontWeight.bold,
                    ),
              ),
              const SizedBox(height: Constants.spacing),
              
              TextFormField(
                controller: _fromLocationController,
                decoration: const InputDecoration(
                  labelText: 'From',
                  prefixIcon: Icon(Icons.location_on),
                  helperText: 'Pickup location',
                ),
                validator: (value) {
                  if (value == null || value.trim().isEmpty) {
                    return 'Please enter pickup location';
                  }
                  return null;
                },
              ),
              const SizedBox(height: Constants.spacing),
              
              TextFormField(
                controller: _toLocationController,
                decoration: const InputDecoration(
                  labelText: 'To',
                  prefixIcon: Icon(Icons.flag),
                  helperText: 'Drop-off location',
                ),
                validator: (value) {
                  if (value == null || value.trim().isEmpty) {
                    return 'Please enter drop-off location';
                  }
                  return null;
                },
              ),
              const SizedBox(height: Constants.largeSpacing),

              // Date and Time
              Text(
                'Date & Time',
                style: Theme.of(context).textTheme.titleLarge?.copyWith(
                      fontWeight: FontWeight.bold,
                    ),
              ),
              const SizedBox(height: Constants.spacing),
              
              Card(
                child: ListTile(
                  leading: const Icon(Icons.schedule),
                  title: const Text('Departure Time'),
                  subtitle: Text(AppHelpers.formatDateTime(_selectedDateTime)),
                  trailing: const Icon(Icons.edit),
                  onTap: _selectDateTime,
                ),
              ),
              const SizedBox(height: Constants.largeSpacing),

              // Seats and Pricing
              Text(
                'Seats & Pricing',
                style: Theme.of(context).textTheme.titleLarge?.copyWith(
                      fontWeight: FontWeight.bold,
                    ),
              ),
              const SizedBox(height: Constants.spacing),
              
              Card(
                child: Padding(
                  padding: const EdgeInsets.all(Constants.spacing),
                  child: Column(
                    crossAxisAlignment: CrossAxisAlignment.start,
                    children: [
                      Text(
                        'Available Seats',
                        style: Theme.of(context).textTheme.titleMedium?.copyWith(
                              fontWeight: FontWeight.bold,
                            ),
                      ),
                      const SizedBox(height: 8),
                      Row(
                        children: List.generate(Constants.maxSeatsPerRide, (index) {
                          final seatNumber = index + 1;
                          return Expanded(
                            child: Padding(
                              padding: EdgeInsets.only(
                                right: index < Constants.maxSeatsPerRide - 1 ? 8 : 0,
                              ),
                              child: FilterChip(
                                label: Text('$seatNumber'),
                                selected: _selectedSeats == seatNumber,
                                onSelected: (selected) {
                                  if (selected) {
                                    setState(() => _selectedSeats = seatNumber);
                                  }
                                },
                              ),
                            ),
                          );
                        }),
                      ),
                    ],
                  ),
                ),
              ),
              const SizedBox(height: Constants.spacing),
              
              TextFormField(
                controller: _marketPriceController,
                keyboardType: TextInputType.number,
                decoration: const InputDecoration(
                  labelText: 'Market Price (Uber/Pathao)',
                  prefixIcon: Icon(Icons.attach_money),
                  helperText: 'Current market rate for this route',
                  suffix: Text('৳'),
                ),
                validator: (value) {
                  if (value == null || value.trim().isEmpty) {
                    return 'Please enter market price';
                  }
                  final price = double.tryParse(value);
                  if (price == null || price <= 0) {
                    return 'Please enter a valid price';
                  }
                  return null;
                },
              ),
              
              // Price Calculation Display
              if (_marketPriceController.text.isNotEmpty)
                Builder(
                  builder: (context) {
                    final marketPrice = double.tryParse(_marketPriceController.text) ?? 0;
                    final yourPrice = marketPrice * 0.6; // 40% discount
                    final yourEarning = yourPrice * 0.9 * _selectedSeats; // 90% after 10% commission
                    
                    return Card(
                      color: Colors.green.withOpacity(0.1),
                      child: Padding(
                        padding: const EdgeInsets.all(Constants.spacing),
                        child: Column(
                          crossAxisAlignment: CrossAxisAlignment.start,
                          children: [
                            Text(
                              'Price Breakdown',
                              style: Theme.of(context).textTheme.titleMedium?.copyWith(
                                    fontWeight: FontWeight.bold,
                                    color: Colors.green[800],
                                  ),
                            ),
                            const SizedBox(height: 8),
                            Row(
                              mainAxisAlignment: MainAxisAlignment.spaceBetween,
                              children: [
                                const Text('Market Price:'),
                                Text(
                                  AppHelpers.formatCurrency(marketPrice),
                                  style: const TextStyle(
                                    decoration: TextDecoration.lineThrough,
                                    color: Colors.grey,
                                  ),
                                ),
                              ],
                            ),
                            Row(
                              mainAxisAlignment: MainAxisAlignment.spaceBetween,
                              children: [
                                const Text('Your Price (40% off):'),
                                Text(
                                  AppHelpers.formatCurrency(yourPrice),
                                  style: const TextStyle(fontWeight: FontWeight.bold),
                                ),
                              ],
                            ),
                            Row(
                              mainAxisAlignment: MainAxisAlignment.spaceBetween,
                              children: [
                                Text('Your Earning ($_selectedSeats seats):'),
                                Text(
                                  AppHelpers.formatCurrency(yourEarning),
                                  style: TextStyle(
                                    fontWeight: FontWeight.bold,
                                    color: Colors.green[800],
                                  ),
                                ),
                              ],
                            ),
                          ],
                        ),
                      ),
                    );
                  },
                ),
              const SizedBox(height: Constants.largeSpacing),

              // Additional Notes
              Text(
                'Additional Information',
                style: Theme.of(context).textTheme.titleLarge?.copyWith(
                      fontWeight: FontWeight.bold,
                    ),
              ),
              const SizedBox(height: Constants.spacing),
              
              TextFormField(
                controller: _notesController,
                maxLines: 3,
                decoration: const InputDecoration(
                  labelText: 'Notes (Optional)',
                  hintText: 'e.g., AC available, comfortable car, etc.',
                ),
              ),
              const SizedBox(height: Constants.largeSpacing),

              // Create Ride Button
              Consumer<RideService>(
                builder: (context, rideService, child) {
                  return ElevatedButton(
                    onPressed: rideService.isLoading ? null : _createRide,
                    child: rideService.isLoading
                        ? const CircularProgressIndicator(color: Colors.white)
                        : const Text('Create Ride'),
                  );
                },
              ),
            ],
          ),
        ),
      ),
    );
  }
}