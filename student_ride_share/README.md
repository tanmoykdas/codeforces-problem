# Student Ride Share App

A Flutter mobile application for students to share rides cost-effectively within university communities.

## Features

### 🎓 Student-Only Platform
- Student ID verification system
- University-based user authentication
- Secure student community

### 🚗 Dual Ride Modes
- **Offer Rides**: Share your vehicle and available seats
- **Book Rides**: Find and book affordable rides

### 💰 Cost-Effective Transportation
- **40% less** than market rates (Uber/Pathao)
- **10% platform commission** for sustainable operations
- **90% earnings** for drivers
- Transparent pricing with savings calculator

### 🛡️ Safety & Security
- Student verification required
- User ratings and reviews
- Real-time ride tracking (planned)
- Emergency contact features (planned)

## App Architecture

### Core Models
- **User**: Student profiles with verification status
- **Ride**: Route-based rides with seat availability
- **Booking**: Passenger reservations with payment tracking

### Key Services
- **AuthService**: Handles authentication and student verification
- **RideService**: Manages ride creation, search, and booking

### Screen Structure
- **Authentication**: Login/Register with student ID verification
- **Home**: Quick actions and recent activity overview
- **Search**: Find and filter available rides
- **Create**: Offer rides with pricing calculator
- **My Rides**: Manage offered rides and bookings
- **Profile**: User information and settings

## Technical Implementation

### State Management
- **Provider** pattern for app-wide state management
- Reactive UI updates based on service state changes

### Data Persistence
- **SharedPreferences** for local data storage
- JSON serialization for complex objects

### Business Logic
- Automatic pricing calculation (40% discount from market rates)
- Commission handling (10% platform fee)
- Seat availability management
- Route matching algorithm

## Getting Started

### Prerequisites
- Flutter SDK (3.0.0 or higher)
- Android Studio or VS Code
- Android/iOS device or emulator

### Installation

1. **Clone the repository**
   ```bash
   git clone <repository-url>
   cd Codeforces-problem/student_ride_share
   ```

2. **Install dependencies**
   ```bash
   flutter pub get
   ```

3. **Configure Android (if needed)**
   - Update `android/local.properties` with your Android SDK path
   - Ensure minimum SDK version 21 or higher

4. **Run the application**
   ```bash
   flutter run
   ```

### Development Setup

1. **Android Studio Setup**
   - Open the `student_ride_share` folder in Android Studio
   - Select your target device/emulator
   - Click the "Run" button

2. **VS Code Setup**
   - Install Flutter and Dart extensions
   - Open the project folder
   - Use `F5` to run with debugging

## Project Structure

```
student_ride_share/
├── lib/
│   ├── main.dart                 # App entry point
│   ├── models/                   # Data models
│   │   ├── user.dart
│   │   ├── ride.dart
│   │   └── booking.dart
│   ├── services/                 # Business logic
│   │   ├── auth_service.dart
│   │   └── ride_service.dart
│   ├── screens/                  # UI screens
│   │   ├── auth/
│   │   ├── home/
│   │   └── rides/
│   ├── widgets/                  # Reusable components
│   └── utils/                    # Utilities and helpers
│       ├── constants.dart
│       ├── app_theme.dart
│       └── helpers.dart
├── android/                      # Android configuration
├── assets/                       # Images and resources
└── test/                        # Unit tests
```

## Key Features Implementation

### Pricing Calculator
- Input market price (Uber/Pathao rate)
- Automatic 40% discount calculation
- Real-time earnings preview for drivers
- Savings display for passengers

### Student Verification
- Student ID image upload (mock implementation)
- University validation
- Verification status tracking

### Ride Matching
- Location-based search
- Date and time filtering
- Seat availability checking
- Route optimization (planned)

### Booking System
- Real-time seat reservation
- Payment calculation
- Commission handling
- Booking confirmation

## Sample Data

The app includes sample rides for demonstration:
- University Gate → City Center (3 seats, ৳120 per seat)
- Dhanmondi → University Campus (2 seats, ৳90 per seat)

## Testing

Run the test suite:
```bash
flutter test
```

## Future Enhancements

### Planned Features
- Real-time GPS tracking
- In-app messaging between users
- Payment gateway integration
- Push notifications
- Rating and review system
- Advanced route optimization
- Emergency assistance
- Admin dashboard

### Technical Improvements
- Backend API integration
- Real-time database synchronization
- Offline capability
- Performance optimization
- Enhanced security measures

## Cost Benefits

### For Passengers
- **40% savings** compared to traditional ride-hailing
- Shared transportation costs
- Safe rides within student community

### For Drivers
- **90% of ride earnings** after 10% platform commission
- Offset vehicle costs
- Build connections within university

### For Platform
- **10% commission** ensures sustainable operations
- Growing student network
- Value-added services potential

## Security Considerations

- Student ID verification prevents unauthorized access
- Local data encryption for sensitive information
- Secure communication protocols (planned)
- Privacy protection measures

## Contributing

1. Fork the repository
2. Create a feature branch
3. Implement your changes
4. Add tests if applicable
5. Submit a pull request

## License

This project is developed for educational and community purposes.

## Support

For issues and feature requests, please use the GitHub issue tracker.

---

**Built with ❤️ for the student community**