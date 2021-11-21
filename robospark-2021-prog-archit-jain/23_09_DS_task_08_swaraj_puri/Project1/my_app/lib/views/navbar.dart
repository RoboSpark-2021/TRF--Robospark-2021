import 'package:flutter/material.dart';

class Navbar extends StatelessWidget{
  @override
  Widget build(BuildContext context){
    return  Row(
        mainAxisAlignment: MainAxisAlignment.center,
        children: const[
          Text("first"),
          Text("Nav"),
          Text("Bar"),
        ]
      ) ;
  }

}