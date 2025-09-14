import 'package:flutter/foundation.dart';
import 'package:shared_preferences/shared_preferences.dart';
import '../models/ride.dart';
import '../models/booking.dart';
import '../models/user.dart';
import '../utils/constants.dart';
import 'dart:convert';
import 'dart:math';

class RideService extends ChangeNotifier {
  List<Ride> _availableRides = [];
  List<Ride> _myRides = [];
  List<Booking> _myBookings = [];
  bool _isLoading = false;
  String? _error;

  List<Ride> get availableRides => _availableRides;
  List<Ride> get myRides => _myRides;
  List<Booking> get myBookings => _myBookings;
  bool get isLoading => _isLoading;
  String? get error => _error;

  RideService() {
    _loadData();
  }

  Future<void> _loadData() async {
    await _loadRidesFromStorage();
    await _loadBookingsFromStorage();
  }

  Future<void> _loadRidesFromStorage() async {
    try {
      final prefs = await SharedPreferences.getInstance();
      final ridesJson = prefs.getStringList(Constants.ridesKey) ?? [];
      _availableRides = ridesJson.map((json) => Ride.fromJson(jsonDecode(json))).toList();
      
      final myRidesJson = prefs.getStringList(Constants.myRidesKey) ?? [];
      _myRides = myRidesJson.map((json) => Ride.fromJson(jsonDecode(json))).toList();
      
      notifyListeners();
    } catch (e) {
      _error = 'Failed to load rides';
      notifyListeners();
    }
  }

  Future<void> _loadBookingsFromStorage() async {
    try {
      final prefs = await SharedPreferences.getInstance();
      final bookingsJson = prefs.getStringList(Constants.bookingsKey) ?? [];
      _myBookings = bookingsJson.map((json) => Booking.fromJson(jsonDecode(json))).toList();
      notifyListeners();
    } catch (e) {
      _error = 'Failed to load bookings';
      notifyListeners();
    }
  }

  Future<bool> createRide({
    required String driverId,
    required String fromLocation,
    required String toLocation,
    required double fromLatitude,
    required double fromLongitude,
    required double toLatitude,
    required double toLongitude,
    required DateTime departureTime,
    required int totalSeats,
    required double marketPrice,
    String notes = '',
  }) async {
    _setLoading(true);
    _clearError();

    try {
      // Calculate price (40% less than market price)
      final pricePerSeat = marketPrice * 0.6;

      final ride = Ride(
        id: 'ride_${DateTime.now().millisecondsSinceEpoch}',
        driverId: driverId,
        fromLocation: fromLocation,
        toLocation: toLocation,
        fromLatitude: fromLatitude,
        fromLongitude: fromLongitude,
        toLatitude: toLatitude,
        toLongitude: toLongitude,
        departureTime: departureTime,
        totalSeats: totalSeats,
        availableSeats: totalSeats,
        pricePerSeat: pricePerSeat,
        marketPrice: marketPrice,
        notes: notes,
        createdAt: DateTime.now(),
      );

      _myRides.add(ride);
      _availableRides.add(ride);
      
      await _saveRidesToStorage();
      _setLoading(false);
      return true;
    } catch (e) {
      _error = 'Failed to create ride';
      _setLoading(false);
      return false;
    }
  }

  Future<List<Ride>> searchRides({
    required String fromLocation,
    required String toLocation,
    DateTime? departureDate,
    int? requiredSeats,
  }) async {
    _setLoading(true);
    _clearError();

    try {
      // Simulate API call
      await Future.delayed(const Duration(seconds: 1));

      List<Ride> filteredRides = _availableRides.where((ride) {
        bool matchesRoute = ride.fromLocation.toLowerCase().contains(fromLocation.toLowerCase()) &&
                           ride.toLocation.toLowerCase().contains(toLocation.toLowerCase());
        
        bool hasSeats = requiredSeats == null || ride.availableSeats >= requiredSeats;
        
        bool matchesDate = departureDate == null ||
                          (ride.departureTime.year == departureDate.year &&
                           ride.departureTime.month == departureDate.month &&
                           ride.departureTime.day == departureDate.day);

        return matchesRoute && hasSeats && matchesDate && ride.status == RideStatus.active;
      }).toList();

      _setLoading(false);
      return filteredRides;
    } catch (e) {
      _error = 'Failed to search rides';
      _setLoading(false);
      return [];
    }
  }

  Future<bool> bookRide({
    required String rideId,
    required String passengerId,
    required int seatsToBook,
  }) async {
    _setLoading(true);
    _clearError();

    try {
      final rideIndex = _availableRides.indexWhere((ride) => ride.id == rideId);
      if (rideIndex == -1) {
        _error = 'Ride not found';
        _setLoading(false);
        return false;
      }

      final ride = _availableRides[rideIndex];
      if (ride.availableSeats < seatsToBook) {
        _error = 'Not enough seats available';
        _setLoading(false);
        return false;
      }

      // Create booking
      final totalAmount = ride.pricePerSeat * seatsToBook;
      final platformFee = totalAmount * 0.1;

      final booking = Booking(
        id: 'booking_${DateTime.now().millisecondsSinceEpoch}',
        rideId: rideId,
        passengerId: passengerId,
        seatsBooked: seatsToBook,
        totalAmount: totalAmount,
        platformFee: platformFee,
        status: BookingStatus.confirmed,
        bookedAt: DateTime.now(),
        confirmedAt: DateTime.now(),
      );

      // Update ride availability
      final updatedRide = ride.copyWith(
        availableSeats: ride.availableSeats - seatsToBook,
        bookedByUserIds: [...ride.bookedByUserIds, passengerId],
      );

      _availableRides[rideIndex] = updatedRide;
      _myBookings.add(booking);

      await _saveRidesToStorage();
      await _saveBookingsToStorage();
      
      _setLoading(false);
      return true;
    } catch (e) {
      _error = 'Failed to book ride';
      _setLoading(false);
      return false;
    }
  }

  Future<void> _saveRidesToStorage() async {
    try {
      final prefs = await SharedPreferences.getInstance();
      
      final ridesJson = _availableRides.map((ride) => jsonEncode(ride.toJson())).toList();
      await prefs.setStringList(Constants.ridesKey, ridesJson);
      
      final myRidesJson = _myRides.map((ride) => jsonEncode(ride.toJson())).toList();
      await prefs.setStringList(Constants.myRidesKey, myRidesJson);
    } catch (e) {
      _error = 'Failed to save rides';
      notifyListeners();
    }
  }

  Future<void> _saveBookingsToStorage() async {
    try {
      final prefs = await SharedPreferences.getInstance();
      final bookingsJson = _myBookings.map((booking) => jsonEncode(booking.toJson())).toList();
      await prefs.setStringList(Constants.bookingsKey, bookingsJson);
    } catch (e) {
      _error = 'Failed to save bookings';
      notifyListeners();
    }
  }

  void _setLoading(bool loading) {
    _isLoading = loading;
    notifyListeners();
  }

  void _clearError() {
    _error = null;
    notifyListeners();
  }

  void clearError() => _clearError();

  // Generate sample data for demonstration
  Future<void> generateSampleData() async {
    if (_availableRides.isNotEmpty) return;

    final sampleRides = [
      Ride(
        id: 'ride_1',
        driverId: 'driver_1',
        fromLocation: 'University Gate',
        toLocation: 'City Center',
        fromLatitude: 23.7275,
        fromLongitude: 90.4075,
        toLatitude: 23.7315,
        toLongitude: 90.4085,
        departureTime: DateTime.now().add(const Duration(hours: 2)),
        totalSeats: 3,
        availableSeats: 2,
        pricePerSeat: 120.0,
        marketPrice: 200.0,
        notes: 'Comfortable car, AC available',
        createdAt: DateTime.now(),
      ),
      Ride(
        id: 'ride_2',
        driverId: 'driver_2',
        fromLocation: 'Dhanmondi',
        toLocation: 'University Campus',
        fromLatitude: 23.7465,
        fromLongitude: 90.3765,
        toLatitude: 23.7275,
        toLongitude: 90.4075,
        departureTime: DateTime.now().add(const Duration(hours: 1)),
        totalSeats: 2,
        availableSeats: 1,
        pricePerSeat: 90.0,
        marketPrice: 150.0,
        notes: 'Bike ride, safe and fast',
        createdAt: DateTime.now(),
      ),
    ];

    _availableRides.addAll(sampleRides);
    await _saveRidesToStorage();
    notifyListeners();
  }
}