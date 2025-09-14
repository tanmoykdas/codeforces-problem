class User {
  final String id;
  final String name;
  final String email;
  final String studentId;
  final String university;
  final String phoneNumber;
  final bool isVerified;
  final double rating;
  final String profileImageUrl;
  final DateTime createdAt;

  User({
    required this.id,
    required this.name,
    required this.email,
    required this.studentId,
    required this.university,
    required this.phoneNumber,
    this.isVerified = false,
    this.rating = 0.0,
    this.profileImageUrl = '',
    required this.createdAt,
  });

  factory User.fromJson(Map<String, dynamic> json) {
    return User(
      id: json['id'] ?? '',
      name: json['name'] ?? '',
      email: json['email'] ?? '',
      studentId: json['studentId'] ?? '',
      university: json['university'] ?? '',
      phoneNumber: json['phoneNumber'] ?? '',
      isVerified: json['isVerified'] ?? false,
      rating: (json['rating'] ?? 0.0).toDouble(),
      profileImageUrl: json['profileImageUrl'] ?? '',
      createdAt: DateTime.parse(json['createdAt'] ?? DateTime.now().toIso8601String()),
    );
  }

  Map<String, dynamic> toJson() {
    return {
      'id': id,
      'name': name,
      'email': email,
      'studentId': studentId,
      'university': university,
      'phoneNumber': phoneNumber,
      'isVerified': isVerified,
      'rating': rating,
      'profileImageUrl': profileImageUrl,
      'createdAt': createdAt.toIso8601String(),
    };
  }

  User copyWith({
    String? id,
    String? name,
    String? email,
    String? studentId,
    String? university,
    String? phoneNumber,
    bool? isVerified,
    double? rating,
    String? profileImageUrl,
    DateTime? createdAt,
  }) {
    return User(
      id: id ?? this.id,
      name: name ?? this.name,
      email: email ?? this.email,
      studentId: studentId ?? this.studentId,
      university: university ?? this.university,
      phoneNumber: phoneNumber ?? this.phoneNumber,
      isVerified: isVerified ?? this.isVerified,
      rating: rating ?? this.rating,
      profileImageUrl: profileImageUrl ?? this.profileImageUrl,
      createdAt: createdAt ?? this.createdAt,
    );
  }
}