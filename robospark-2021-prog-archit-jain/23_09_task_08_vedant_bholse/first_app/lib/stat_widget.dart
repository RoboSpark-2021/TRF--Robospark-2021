import 'package:flutter/material.dart';

Widget statWidget(String title, String stat) {
  return Expanded(
      child: Column(
    children: [
      Text(
        title,
        style: TextStyle(fontWeight: FontWeight.bold, fontSize: 24),
      ),
      Text(
        stat,
        style: TextStyle(fontWeight: FontWeight.bold, fontSize: 22),
      )
    ],
  ));
}
