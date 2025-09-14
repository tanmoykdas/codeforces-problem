class Constants {
  // Storage keys
  static const String userKey = 'user_data';
  static const String ridesKey = 'available_rides';
  static const String myRidesKey = 'my_rides';
  static const String bookingsKey = 'my_bookings';

  // App configuration
  static const String appName = 'Student Ride Share';
  static const double platformCommissionRate = 0.1; // 10%
  static const double discountRate = 0.4; // 40% discount from market price
  
  // UI Constants
  static const double borderRadius = 12.0;
  static const double spacing = 16.0;
  static const double smallSpacing = 8.0;
  static const double largeSpacing = 24.0;

  // Validation
  static const int minPasswordLength = 6;
  static const int maxSeatsPerRide = 5;
}