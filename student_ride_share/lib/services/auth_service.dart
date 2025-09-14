import 'package:flutter/foundation.dart';
import 'package:shared_preferences/shared_preferences.dart';
import '../models/user.dart';
import '../utils/constants.dart';
import 'dart:convert';

class AuthService extends ChangeNotifier {
  User? _currentUser;
  bool _isLoading = false;
  String? _error;

  User? get currentUser => _currentUser;
  bool get isLoading => _isLoading;
  String? get error => _error;
  bool get isAuthenticated => _currentUser != null;

  AuthService() {
    _loadUserFromStorage();
  }

  Future<void> _loadUserFromStorage() async {
    try {
      final prefs = await SharedPreferences.getInstance();
      final userJson = prefs.getString(Constants.userKey);
      if (userJson != null) {
        final userData = jsonDecode(userJson);
        _currentUser = User.fromJson(userData);
        notifyListeners();
      }
    } catch (e) {
      _error = 'Failed to load user data';
      notifyListeners();
    }
  }

  Future<bool> login(String email, String password) async {
    _setLoading(true);
    _clearError();

    try {
      // Simulate API call - In real app, this would be an HTTP request
      await Future.delayed(const Duration(seconds: 2));

      // Mock validation - replace with actual API call
      if (email.contains('@') && password.length >= 6) {
        _currentUser = User(
          id: 'user_${DateTime.now().millisecondsSinceEpoch}',
          name: 'John Doe',
          email: email,
          studentId: 'STU${DateTime.now().millisecondsSinceEpoch % 100000}',
          university: 'University of Technology',
          phoneNumber: '+1234567890',
          isVerified: true,
          rating: 4.5,
          createdAt: DateTime.now(),
        );

        await _saveUserToStorage();
        _setLoading(false);
        return true;
      } else {
        _error = 'Invalid email or password';
        _setLoading(false);
        return false;
      }
    } catch (e) {
      _error = 'Login failed. Please try again.';
      _setLoading(false);
      return false;
    }
  }

  Future<bool> register({
    required String name,
    required String email,
    required String password,
    required String studentId,
    required String university,
    required String phoneNumber,
  }) async {
    _setLoading(true);
    _clearError();

    try {
      // Simulate API call - In real app, this would be an HTTP request
      await Future.delayed(const Duration(seconds: 2));

      // Mock validation - replace with actual API call
      if (email.contains('@') && password.length >= 6 && studentId.isNotEmpty) {
        _currentUser = User(
          id: 'user_${DateTime.now().millisecondsSinceEpoch}',
          name: name,
          email: email,
          studentId: studentId,
          university: university,
          phoneNumber: phoneNumber,
          isVerified: false, // Would need verification in real app
          rating: 0.0,
          createdAt: DateTime.now(),
        );

        await _saveUserToStorage();
        _setLoading(false);
        return true;
      } else {
        _error = 'Please check your input and try again';
        _setLoading(false);
        return false;
      }
    } catch (e) {
      _error = 'Registration failed. Please try again.';
      _setLoading(false);
      return false;
    }
  }

  Future<bool> verifyStudentId(String studentIdImage) async {
    _setLoading(true);
    _clearError();

    try {
      // Simulate ID verification process
      await Future.delayed(const Duration(seconds: 3));

      // Mock verification - In real app, this would involve image processing
      if (_currentUser != null) {
        _currentUser = _currentUser!.copyWith(isVerified: true);
        await _saveUserToStorage();
        _setLoading(false);
        return true;
      }

      _error = 'Verification failed';
      _setLoading(false);
      return false;
    } catch (e) {
      _error = 'Verification failed. Please try again.';
      _setLoading(false);
      return false;
    }
  }

  Future<void> logout() async {
    try {
      final prefs = await SharedPreferences.getInstance();
      await prefs.remove(Constants.userKey);
      _currentUser = null;
      _clearError();
      notifyListeners();
    } catch (e) {
      _error = 'Logout failed';
      notifyListeners();
    }
  }

  Future<void> _saveUserToStorage() async {
    if (_currentUser != null) {
      final prefs = await SharedPreferences.getInstance();
      final userJson = jsonEncode(_currentUser!.toJson());
      await prefs.setString(Constants.userKey, userJson);
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
}