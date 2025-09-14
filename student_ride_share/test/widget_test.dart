import 'package:flutter_test/flutter_test.dart';
import 'package:student_ride_share/main.dart';

void main() {
  testWidgets('App starts and shows splash screen', (WidgetTester tester) async {
    // Build our app and trigger a frame.
    await tester.pumpWidget(const StudentRideShareApp());

    // Verify that the splash screen is displayed
    expect(find.text('Student Ride Share'), findsOneWidget);
    expect(find.text('Smart, Safe & Affordable'), findsOneWidget);
  });
}