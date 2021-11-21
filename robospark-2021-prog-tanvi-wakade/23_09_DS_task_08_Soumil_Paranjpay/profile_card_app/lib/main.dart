import 'package:flutter/material.dart';
import 'package:profile_card/widgets/profile_card.dart';

void main() {
  runApp(MyApp());
}

class MyApp extends StatelessWidget {
  @override
  Widget build(BuildContext context) {
    return MaterialApp(
      home: ProfileCard(),
    );
  }
}
