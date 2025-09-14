import 'package:intl/intl.dart';

class AppHelpers {
  static String formatCurrency(double amount) {
    final formatter = NumberFormat.currency(locale: 'en_US', symbol: '৳');
    return formatter.format(amount);
  }

  static String formatDateTime(DateTime dateTime) {
    final formatter = DateFormat('MMM dd, yyyy hh:mm a');
    return formatter.format(dateTime);
  }

  static String formatDate(DateTime dateTime) {
    final formatter = DateFormat('MMM dd, yyyy');
    return formatter.format(dateTime);
  }

  static String formatTime(DateTime dateTime) {
    final formatter = DateFormat('hh:mm a');
    return formatter.format(dateTime);
  }

  static String timeAgo(DateTime dateTime) {
    final now = DateTime.now();
    final difference = now.difference(dateTime);

    if (difference.inDays > 0) {
      return '${difference.inDays}d ago';
    } else if (difference.inHours > 0) {
      return '${difference.inHours}h ago';
    } else if (difference.inMinutes > 0) {
      return '${difference.inMinutes}m ago';
    } else {
      return 'Just now';
    }
  }

  static String formatDuration(Duration duration) {
    String twoDigits(int n) => n.toString().padLeft(2, "0");
    String twoDigitMinutes = twoDigits(duration.inMinutes.remainder(60));
    String twoDigitSeconds = twoDigits(duration.inSeconds.remainder(60));
    
    if (duration.inHours > 0) {
      return "${twoDigits(duration.inHours)}:$twoDigitMinutes:$twoDigitSeconds";
    } else {
      return "$twoDigitMinutes:$twoDigitSeconds";
    }
  }

  static bool isValidEmail(String email) {
    return RegExp(r'^[\w-\.]+@([\w-]+\.)+[\w-]{2,4}$').hasMatch(email);
  }

  static bool isValidPhoneNumber(String phone) {
    return RegExp(r'^\+?[\d\s\-\(\)]{10,}$').hasMatch(phone);
  }

  static bool isValidStudentId(String studentId) {
    return studentId.length >= 3 && RegExp(r'^[A-Za-z0-9]+$').hasMatch(studentId);
  }

  static double calculateDistance(double lat1, double lon1, double lat2, double lon2) {
    // Haversine formula for calculating distance between two points
    const double earthRadius = 6371; // Earth's radius in kilometers
    
    double dLat = _toRadians(lat2 - lat1);
    double dLon = _toRadians(lon2 - lon1);
    
    double a = (Math.sin(dLat / 2) * Math.sin(dLat / 2)) +
        (Math.cos(_toRadians(lat1)) * Math.cos(_toRadians(lat2)) *
            Math.sin(dLon / 2) * Math.sin(dLon / 2));
    double c = 2 * Math.atan2(Math.sqrt(a), Math.sqrt(1 - a));
    
    return earthRadius * c;
  }

  static double _toRadians(double degrees) {
    return degrees * (Math.pi / 180);
  }
}

// Math constants
class Math {
  static const double pi = 3.141592653589793;
  
  static double sin(double x) => x - (x * x * x) / 6 + (x * x * x * x * x) / 120;
  static double cos(double x) => 1 - (x * x) / 2 + (x * x * x * x) / 24;
  static double sqrt(double x) => x == 0 ? 0 : x / 2 + sqrt(x / 2) / 2;
  static double atan2(double y, double x) => y / x; // Simplified for demo
}