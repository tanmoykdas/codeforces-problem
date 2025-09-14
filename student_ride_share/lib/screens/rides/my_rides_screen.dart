import 'package:flutter/material.dart';
import 'package:provider/provider.dart';
import '../../services/auth_service.dart';
import '../../services/ride_service.dart';
import '../../models/ride.dart';
import '../../models/booking.dart';
import '../../utils/constants.dart';
import '../../utils/helpers.dart';

class MyRidesScreen extends StatefulWidget {
  const MyRidesScreen({super.key});

  @override
  State<MyRidesScreen> createState() => _MyRidesScreenState();
}

class _MyRidesScreenState extends State<MyRidesScreen>
    with SingleTickerProviderStateMixin {
  late TabController _tabController;

  @override
  void initState() {
    super.initState();
    _tabController = TabController(length: 2, vsync: this);
  }

  @override
  void dispose() {
    _tabController.dispose();
    super.dispose();
  }

  @override
  Widget build(BuildContext context) {
    return Scaffold(
      appBar: AppBar(
        title: const Text('My Rides'),
        bottom: TabBar(
          controller: _tabController,
          tabs: const [
            Tab(text: 'My Offered Rides'),
            Tab(text: 'My Bookings'),
          ],
        ),
      ),
      body: TabBarView(
        controller: _tabController,
        children: const [
          _MyOfferedRidesTab(),
          _MyBookingsTab(),
        ],
      ),
    );
  }
}

class _MyOfferedRidesTab extends StatelessWidget {
  const _MyOfferedRidesTab();

  @override
  Widget build(BuildContext context) {
    return Consumer2<AuthService, RideService>(
      builder: (context, authService, rideService, child) {
        final user = authService.currentUser;
        if (user == null) return const SizedBox();

        final myRides = rideService.myRides
            .where((ride) => ride.driverId == user.id)
            .toList();

        if (myRides.isEmpty) {
          return const Center(
            child: Column(
              mainAxisAlignment: MainAxisAlignment.center,
              children: [
                Icon(
                  Icons.directions_car_outlined,
                  size: 64,
                  color: Colors.grey,
                ),
                SizedBox(height: 16),
                Text(
                  'No rides offered yet',
                  style: TextStyle(
                    fontSize: 18,
                    fontWeight: FontWeight.bold,
                    color: Colors.grey,
                  ),
                ),
                SizedBox(height: 8),
                Text(
                  'Offer your first ride to start earning!',
                  style: TextStyle(color: Colors.grey),
                ),
              ],
            ),
          );
        }

        return ListView.builder(
          padding: const EdgeInsets.all(Constants.spacing),
          itemCount: myRides.length,
          itemBuilder: (context, index) {
            final ride = myRides[index];
            return _MyRideCard(ride: ride);
          },
        );
      },
    );
  }
}

class _MyBookingsTab extends StatelessWidget {
  const _MyBookingsTab();

  @override
  Widget build(BuildContext context) {
    return Consumer2<AuthService, RideService>(
      builder: (context, authService, rideService, child) {
        final user = authService.currentUser;
        if (user == null) return const SizedBox();

        final myBookings = rideService.myBookings
            .where((booking) => booking.passengerId == user.id)
            .toList();

        if (myBookings.isEmpty) {
          return const Center(
            child: Column(
              mainAxisAlignment: MainAxisAlignment.center,
              children: [
                Icon(
                  Icons.book_online_outlined,
                  size: 64,
                  color: Colors.grey,
                ),
                SizedBox(height: 16),
                Text(
                  'No bookings yet',
                  style: TextStyle(
                    fontSize: 18,
                    fontWeight: FontWeight.bold,
                    color: Colors.grey,
                  ),
                ),
                SizedBox(height: 8),
                Text(
                  'Book your first ride to get started!',
                  style: TextStyle(color: Colors.grey),
                ),
              ],
            ),
          );
        }

        return ListView.builder(
          padding: const EdgeInsets.all(Constants.spacing),
          itemCount: myBookings.length,
          itemBuilder: (context, index) {
            final booking = myBookings[index];
            return _BookingCard(booking: booking);
          },
        );
      },
    );
  }
}

class _MyRideCard extends StatelessWidget {
  final Ride ride;

  const _MyRideCard({required this.ride});

  @override
  Widget build(BuildContext context) {
    final bookedSeats = ride.totalSeats - ride.availableSeats;
    final totalEarnings = ride.driverEarning * bookedSeats;
    final isActive = ride.status == RideStatus.active;

    return Card(
      margin: const EdgeInsets.only(bottom: 12),
      child: Padding(
        padding: const EdgeInsets.all(Constants.spacing),
        child: Column(
          crossAxisAlignment: CrossAxisAlignment.start,
          children: [
            // Header with Status
            Row(
              children: [
                Expanded(
                  child: Text(
                    '${ride.fromLocation} → ${ride.toLocation}',
                    style: Theme.of(context).textTheme.titleMedium?.copyWith(
                          fontWeight: FontWeight.bold,
                        ),
                  ),
                ),
                Container(
                  padding: const EdgeInsets.symmetric(horizontal: 8, vertical: 4),
                  decoration: BoxDecoration(
                    color: isActive ? Colors.green.withOpacity(0.1) : Colors.grey.withOpacity(0.1),
                    borderRadius: BorderRadius.circular(8),
                  ),
                  child: Text(
                    isActive ? 'Active' : ride.status.toString().split('.').last.toUpperCase(),
                    style: TextStyle(
                      color: isActive ? Colors.green[800] : Colors.grey[800],
                      fontWeight: FontWeight.bold,
                      fontSize: 12,
                    ),
                  ),
                ),
              ],
            ),
            const SizedBox(height: 8),

            // Date and Time
            Row(
              children: [
                const Icon(Icons.schedule, size: 16, color: Colors.grey),
                const SizedBox(width: 4),
                Text(
                  AppHelpers.formatDateTime(ride.departureTime),
                  style: Theme.of(context).textTheme.bodyMedium?.copyWith(
                        color: Colors.grey[600],
                      ),
                ),
              ],
            ),
            const SizedBox(height: 8),

            // Seats Information
            Row(
              children: [
                const Icon(Icons.airline_seat_recline_normal, size: 16, color: Colors.grey),
                const SizedBox(width: 4),
                Text(
                  '$bookedSeats/${ride.totalSeats} seats booked',
                  style: Theme.of(context).textTheme.bodyMedium?.copyWith(
                        color: Colors.grey[600],
                      ),
                ),
                const Spacer(),
                Text(
                  '${ride.availableSeats} available',
                  style: Theme.of(context).textTheme.bodyMedium?.copyWith(
                        color: isActive ? Colors.green[800] : Colors.grey[600],
                        fontWeight: FontWeight.bold,
                      ),
                ),
              ],
            ),

            if (ride.notes.isNotEmpty) ...[
              const SizedBox(height: 8),
              Text(
                'Notes: ${ride.notes}',
                style: Theme.of(context).textTheme.bodySmall?.copyWith(
                      color: Colors.grey[600],
                      fontStyle: FontStyle.italic,
                    ),
              ),
            ],

            const SizedBox(height: 12),

            // Earnings Information
            Container(
              padding: const EdgeInsets.all(12),
              decoration: BoxDecoration(
                color: Colors.blue.withOpacity(0.1),
                borderRadius: BorderRadius.circular(8),
              ),
              child: Row(
                children: [
                  Expanded(
                    child: Column(
                      crossAxisAlignment: CrossAxisAlignment.start,
                      children: [
                        Text(
                          'Price per seat',
                          style: Theme.of(context).textTheme.bodySmall?.copyWith(
                                color: Colors.grey[600],
                              ),
                        ),
                        Text(
                          AppHelpers.formatCurrency(ride.pricePerSeat),
                          style: Theme.of(context).textTheme.titleMedium?.copyWith(
                                fontWeight: FontWeight.bold,
                                color: Theme.of(context).primaryColor,
                              ),
                        ),
                      ],
                    ),
                  ),
                  Expanded(
                    child: Column(
                      crossAxisAlignment: CrossAxisAlignment.center,
                      children: [
                        Text(
                          'Total earnings',
                          style: Theme.of(context).textTheme.bodySmall?.copyWith(
                                color: Colors.grey[600],
                              ),
                        ),
                        Text(
                          AppHelpers.formatCurrency(totalEarnings),
                          style: Theme.of(context).textTheme.titleMedium?.copyWith(
                                fontWeight: FontWeight.bold,
                                color: Colors.green[800],
                              ),
                        ),
                      ],
                    ),
                  ),
                  Expanded(
                    child: Column(
                      crossAxisAlignment: CrossAxisAlignment.end,
                      children: [
                        Text(
                          'Commission',
                          style: Theme.of(context).textTheme.bodySmall?.copyWith(
                                color: Colors.grey[600],
                              ),
                        ),
                        Text(
                          AppHelpers.formatCurrency(ride.platformCommission * bookedSeats),
                          style: Theme.of(context).textTheme.titleMedium?.copyWith(
                                fontWeight: FontWeight.bold,
                                color: Colors.orange[800],
                              ),
                        ),
                      ],
                    ),
                  ),
                ],
              ),
            ),

            if (bookedSeats > 0) ...[
              const SizedBox(height: 12),
              Row(
                children: [
                  const Icon(Icons.people, size: 16, color: Colors.blue),
                  const SizedBox(width: 4),
                  Text(
                    '$bookedSeats passenger${bookedSeats > 1 ? 's' : ''} booked',
                    style: TextStyle(
                      color: Colors.blue[800],
                      fontWeight: FontWeight.bold,
                    ),
                  ),
                  const Spacer(),
                  TextButton(
                    onPressed: () {
                      // Show passenger details
                    },
                    child: const Text('View Details'),
                  ),
                ],
              ),
            ],
          ],
        ),
      ),
    );
  }
}

class _BookingCard extends StatelessWidget {
  final Booking booking;

  const _BookingCard({required this.booking});

  @override
  Widget build(BuildContext context) {
    final isConfirmed = booking.status == BookingStatus.confirmed;
    final isPending = booking.status == BookingStatus.pending;
    final isCancelled = booking.status == BookingStatus.cancelled;

    Color statusColor = Colors.grey;
    if (isConfirmed) statusColor = Colors.green;
    if (isPending) statusColor = Colors.orange;
    if (isCancelled) statusColor = Colors.red;

    return Card(
      margin: const EdgeInsets.only(bottom: 12),
      child: Padding(
        padding: const EdgeInsets.all(Constants.spacing),
        child: Column(
          crossAxisAlignment: CrossAxisAlignment.start,
          children: [
            // Header with Status
            Row(
              children: [
                Expanded(
                  child: Text(
                    'Booking #${booking.id.substring(booking.id.length - 6)}',
                    style: Theme.of(context).textTheme.titleMedium?.copyWith(
                          fontWeight: FontWeight.bold,
                        ),
                  ),
                ),
                Container(
                  padding: const EdgeInsets.symmetric(horizontal: 8, vertical: 4),
                  decoration: BoxDecoration(
                    color: statusColor.withOpacity(0.1),
                    borderRadius: BorderRadius.circular(8),
                  ),
                  child: Text(
                    booking.status.toString().split('.').last.toUpperCase(),
                    style: TextStyle(
                      color: statusColor,
                      fontWeight: FontWeight.bold,
                      fontSize: 12,
                    ),
                  ),
                ),
              ],
            ),
            const SizedBox(height: 8),

            // Ride Information (if available)
            if (booking.ride != null) ...[
              Text(
                '${booking.ride!.fromLocation} → ${booking.ride!.toLocation}',
                style: Theme.of(context).textTheme.titleMedium?.copyWith(
                      fontWeight: FontWeight.bold,
                    ),
              ),
              const SizedBox(height: 4),
              Row(
                children: [
                  const Icon(Icons.schedule, size: 16, color: Colors.grey),
                  const SizedBox(width: 4),
                  Text(
                    AppHelpers.formatDateTime(booking.ride!.departureTime),
                    style: Theme.of(context).textTheme.bodyMedium?.copyWith(
                          color: Colors.grey[600],
                        ),
                  ),
                ],
              ),
            ],
            const SizedBox(height: 8),

            // Booking Details
            Row(
              children: [
                const Icon(Icons.airline_seat_recline_normal, size: 16, color: Colors.grey),
                const SizedBox(width: 4),
                Text(
                  '${booking.seatsBooked} seat${booking.seatsBooked > 1 ? 's' : ''}',
                  style: Theme.of(context).textTheme.bodyMedium?.copyWith(
                        color: Colors.grey[600],
                      ),
                ),
                const Spacer(),
                Text(
                  'Booked ${AppHelpers.timeAgo(booking.bookedAt)}',
                  style: Theme.of(context).textTheme.bodySmall?.copyWith(
                        color: Colors.grey[600],
                      ),
                ),
              ],
            ),
            const SizedBox(height: 12),

            // Payment Information
            Container(
              padding: const EdgeInsets.all(12),
              decoration: BoxDecoration(
                color: Colors.green.withOpacity(0.1),
                borderRadius: BorderRadius.circular(8),
              ),
              child: Row(
                children: [
                  Expanded(
                    child: Column(
                      crossAxisAlignment: CrossAxisAlignment.start,
                      children: [
                        Text(
                          'Total Amount',
                          style: Theme.of(context).textTheme.bodySmall?.copyWith(
                                color: Colors.grey[600],
                              ),
                        ),
                        Text(
                          AppHelpers.formatCurrency(booking.totalAmount),
                          style: Theme.of(context).textTheme.titleMedium?.copyWith(
                                fontWeight: FontWeight.bold,
                                color: Colors.green[800],
                              ),
                        ),
                      ],
                    ),
                  ),
                  if (booking.ride != null)
                    Expanded(
                      child: Column(
                        crossAxisAlignment: CrossAxisAlignment.end,
                        children: [
                          Text(
                            'You Saved',
                            style: Theme.of(context).textTheme.bodySmall?.copyWith(
                                  color: Colors.grey[600],
                                ),
                          ),
                          Text(
                            AppHelpers.formatCurrency(booking.ride!.savings * booking.seatsBooked),
                            style: Theme.of(context).textTheme.titleMedium?.copyWith(
                                  fontWeight: FontWeight.bold,
                                  color: Colors.blue[800],
                                ),
                          ),
                        ],
                      ),
                    ),
                ],
              ),
            ),

            if (isCancelled && booking.cancellationReason != null) ...[
              const SizedBox(height: 8),
              Text(
                'Cancellation reason: ${booking.cancellationReason}',
                style: Theme.of(context).textTheme.bodySmall?.copyWith(
                      color: Colors.red[700],
                      fontStyle: FontStyle.italic,
                    ),
              ),
            ],

            if (isConfirmed) ...[
              const SizedBox(height: 12),
              Row(
                children: [
                  const Spacer(),
                  TextButton(
                    onPressed: () {
                      // Show driver contact
                    },
                    child: const Text('Contact Driver'),
                  ),
                  const SizedBox(width: 8),
                  OutlinedButton(
                    onPressed: () {
                      // Cancel booking
                    },
                    child: const Text('Cancel'),
                  ),
                ],
              ),
            ],
          ],
        ),
      ),
    );
  }
}