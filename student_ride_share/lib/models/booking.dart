import 'user.dart';
import 'ride.dart';

enum BookingStatus { pending, confirmed, cancelled, completed }

class Booking {
  final String id;
  final String rideId;
  final String passengerId;
  final User? passenger;
  final Ride? ride;
  final int seatsBooked;
  final double totalAmount;
  final double platformFee;
  final BookingStatus status;
  final DateTime bookedAt;
  final DateTime? confirmedAt;
  final DateTime? cancelledAt;
  final String? cancellationReason;

  Booking({
    required this.id,
    required this.rideId,
    required this.passengerId,
    this.passenger,
    this.ride,
    required this.seatsBooked,
    required this.totalAmount,
    required this.platformFee,
    this.status = BookingStatus.pending,
    required this.bookedAt,
    this.confirmedAt,
    this.cancelledAt,
    this.cancellationReason,
  });

  factory Booking.fromJson(Map<String, dynamic> json) {
    return Booking(
      id: json['id'] ?? '',
      rideId: json['rideId'] ?? '',
      passengerId: json['passengerId'] ?? '',
      passenger: json['passenger'] != null ? User.fromJson(json['passenger']) : null,
      ride: json['ride'] != null ? Ride.fromJson(json['ride']) : null,
      seatsBooked: json['seatsBooked'] ?? 1,
      totalAmount: (json['totalAmount'] ?? 0.0).toDouble(),
      platformFee: (json['platformFee'] ?? 0.0).toDouble(),
      status: BookingStatus.values.firstWhere(
        (e) => e.toString() == 'BookingStatus.${json['status']}',
        orElse: () => BookingStatus.pending,
      ),
      bookedAt: DateTime.parse(json['bookedAt'] ?? DateTime.now().toIso8601String()),
      confirmedAt: json['confirmedAt'] != null ? DateTime.parse(json['confirmedAt']) : null,
      cancelledAt: json['cancelledAt'] != null ? DateTime.parse(json['cancelledAt']) : null,
      cancellationReason: json['cancellationReason'],
    );
  }

  Map<String, dynamic> toJson() {
    return {
      'id': id,
      'rideId': rideId,
      'passengerId': passengerId,
      'passenger': passenger?.toJson(),
      'ride': ride?.toJson(),
      'seatsBooked': seatsBooked,
      'totalAmount': totalAmount,
      'platformFee': platformFee,
      'status': status.toString().split('.').last,
      'bookedAt': bookedAt.toIso8601String(),
      'confirmedAt': confirmedAt?.toIso8601String(),
      'cancelledAt': cancelledAt?.toIso8601String(),
      'cancellationReason': cancellationReason,
    };
  }

  double get driverAmount => totalAmount - platformFee;

  Booking copyWith({
    String? id,
    String? rideId,
    String? passengerId,
    User? passenger,
    Ride? ride,
    int? seatsBooked,
    double? totalAmount,
    double? platformFee,
    BookingStatus? status,
    DateTime? bookedAt,
    DateTime? confirmedAt,
    DateTime? cancelledAt,
    String? cancellationReason,
  }) {
    return Booking(
      id: id ?? this.id,
      rideId: rideId ?? this.rideId,
      passengerId: passengerId ?? this.passengerId,
      passenger: passenger ?? this.passenger,
      ride: ride ?? this.ride,
      seatsBooked: seatsBooked ?? this.seatsBooked,
      totalAmount: totalAmount ?? this.totalAmount,
      platformFee: platformFee ?? this.platformFee,
      status: status ?? this.status,
      bookedAt: bookedAt ?? this.bookedAt,
      confirmedAt: confirmedAt ?? this.confirmedAt,
      cancelledAt: cancelledAt ?? this.cancelledAt,
      cancellationReason: cancellationReason ?? this.cancellationReason,
    );
  }
}