import 'user.dart';

enum RideStatus { active, completed, cancelled }

class Ride {
  final String id;
  final String driverId;
  final User? driver;
  final String fromLocation;
  final String toLocation;
  final double fromLatitude;
  final double fromLongitude;
  final double toLatitude;
  final double toLongitude;
  final DateTime departureTime;
  final int totalSeats;
  final int availableSeats;
  final double pricePerSeat;
  final double marketPrice; // For comparison (Uber/Pathao price)
  final String notes;
  final RideStatus status;
  final DateTime createdAt;
  final List<String> bookedByUserIds;

  Ride({
    required this.id,
    required this.driverId,
    this.driver,
    required this.fromLocation,
    required this.toLocation,
    required this.fromLatitude,
    required this.fromLongitude,
    required this.toLatitude,
    required this.toLongitude,
    required this.departureTime,
    required this.totalSeats,
    required this.availableSeats,
    required this.pricePerSeat,
    required this.marketPrice,
    this.notes = '',
    this.status = RideStatus.active,
    required this.createdAt,
    this.bookedByUserIds = const [],
  });

  factory Ride.fromJson(Map<String, dynamic> json) {
    return Ride(
      id: json['id'] ?? '',
      driverId: json['driverId'] ?? '',
      driver: json['driver'] != null ? User.fromJson(json['driver']) : null,
      fromLocation: json['fromLocation'] ?? '',
      toLocation: json['toLocation'] ?? '',
      fromLatitude: (json['fromLatitude'] ?? 0.0).toDouble(),
      fromLongitude: (json['fromLongitude'] ?? 0.0).toDouble(),
      toLatitude: (json['toLatitude'] ?? 0.0).toDouble(),
      toLongitude: (json['toLongitude'] ?? 0.0).toDouble(),
      departureTime: DateTime.parse(json['departureTime'] ?? DateTime.now().toIso8601String()),
      totalSeats: json['totalSeats'] ?? 1,
      availableSeats: json['availableSeats'] ?? 1,
      pricePerSeat: (json['pricePerSeat'] ?? 0.0).toDouble(),
      marketPrice: (json['marketPrice'] ?? 0.0).toDouble(),
      notes: json['notes'] ?? '',
      status: RideStatus.values.firstWhere(
        (e) => e.toString() == 'RideStatus.${json['status']}',
        orElse: () => RideStatus.active,
      ),
      createdAt: DateTime.parse(json['createdAt'] ?? DateTime.now().toIso8601String()),
      bookedByUserIds: List<String>.from(json['bookedByUserIds'] ?? []),
    );
  }

  Map<String, dynamic> toJson() {
    return {
      'id': id,
      'driverId': driverId,
      'driver': driver?.toJson(),
      'fromLocation': fromLocation,
      'toLocation': toLocation,
      'fromLatitude': fromLatitude,
      'fromLongitude': fromLongitude,
      'toLatitude': toLatitude,
      'toLongitude': toLongitude,
      'departureTime': departureTime.toIso8601String(),
      'totalSeats': totalSeats,
      'availableSeats': availableSeats,
      'pricePerSeat': pricePerSeat,
      'marketPrice': marketPrice,
      'notes': notes,
      'status': status.toString().split('.').last,
      'createdAt': createdAt.toIso8601String(),
      'bookedByUserIds': bookedByUserIds,
    };
  }

  double get platformCommission => pricePerSeat * 0.1; // 10% commission
  double get driverEarning => pricePerSeat * 0.9; // 90% for driver
  double get savings => marketPrice - pricePerSeat; // How much passenger saves
  double get savingsPercentage => (savings / marketPrice) * 100; // Percentage saved

  Ride copyWith({
    String? id,
    String? driverId,
    User? driver,
    String? fromLocation,
    String? toLocation,
    double? fromLatitude,
    double? fromLongitude,
    double? toLatitude,
    double? toLongitude,
    DateTime? departureTime,
    int? totalSeats,
    int? availableSeats,
    double? pricePerSeat,
    double? marketPrice,
    String? notes,
    RideStatus? status,
    DateTime? createdAt,
    List<String>? bookedByUserIds,
  }) {
    return Ride(
      id: id ?? this.id,
      driverId: driverId ?? this.driverId,
      driver: driver ?? this.driver,
      fromLocation: fromLocation ?? this.fromLocation,
      toLocation: toLocation ?? this.toLocation,
      fromLatitude: fromLatitude ?? this.fromLatitude,
      fromLongitude: fromLongitude ?? this.fromLongitude,
      toLatitude: toLatitude ?? this.toLatitude,
      toLongitude: toLongitude ?? this.toLongitude,
      departureTime: departureTime ?? this.departureTime,
      totalSeats: totalSeats ?? this.totalSeats,
      availableSeats: availableSeats ?? this.availableSeats,
      pricePerSeat: pricePerSeat ?? this.pricePerSeat,
      marketPrice: marketPrice ?? this.marketPrice,
      notes: notes ?? this.notes,
      status: status ?? this.status,
      createdAt: createdAt ?? this.createdAt,
      bookedByUserIds: bookedByUserIds ?? this.bookedByUserIds,
    );
  }
}