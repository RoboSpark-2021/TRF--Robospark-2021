import 'package:flutter/material.dart';
import 'package:my_app/views/home_page.dart';
import 'package:my_app/views/navbar.dart';

void main() {
  runApp(MyApp());
}

// ignore: use_key_in_widget_constructors
class MyApp extends StatelessWidget {
@override 
Widget build(BuildContext context){
  return MaterialApp(
    theme: ThemeData.light(),

    home:HomePage());
    
  
}
}

  
 