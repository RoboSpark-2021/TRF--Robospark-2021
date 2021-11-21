import 'package:flutter/material.dart';


class HomePage extends StatelessWidget{
@override
Widget build(BuildContext context)
{
  return Scaffold(
    body:SingleChildScrollView(
      
      child : Column(crossAxisAlignment: CrossAxisAlignment.start,
      children: [
         Row(
        mainAxisAlignment: MainAxisAlignment.center,
        children: const[
          Text("First"),
              Text("TASK"),
          Text("01"),
        ]
      ) ,
        Container(
          padding: EdgeInsets.symmetric(vertical: 20, horizontal:100),
          alignment:Alignment.center,
          decoration: BoxDecoration(borderRadius: BorderRadius.vertical(
            bottom: Radius.circular(12),
          )),
        child:Image.asset('assets/img.jpg',fit: BoxFit.fill),),
        Padding(
          padding: const EdgeInsets.symmetric(vertical: 20, horizontal:16),
          child: Text(
            "Name: Swaraj Puri",
            style: TextStyle(
              fontSize: 15,
              fontWeight: FontWeight.bold,
          
            ),
          ),
        ),

        Padding(
          
          padding: const EdgeInsets.all(16.0),
          
          child: Text(
            "Year: SY",
            style: TextStyle(
              fontSize: 15,
              fontWeight: FontWeight.bold,
            ),
          ),
        ),

        Padding(
          
          padding: const EdgeInsets.all(16.0),
          child: Text(
            "Div:C",
            style: TextStyle(
              fontSize: 15,
              fontWeight: FontWeight.bold,
            ),
          ),
        ),
        

      ],)
    )
  );
}

}