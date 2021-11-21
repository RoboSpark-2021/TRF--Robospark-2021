import 'package:flutter/material.dart';

class Home_Page extends StatelessWidget {
  const Home_Page({ Key? key }) : super(key: key);

  @override
  Widget build(BuildContext context) {
    return Material(
      color: Colors.white,
      child: Column(
        children: [
          Image.asset("assets/images/my_name_image.png",fit:BoxFit.cover),
          Text("\n\nWelcome to Home Page! \n\n",style:TextStyle(
            fontSize: 22,
            fontWeight:FontWeight.bold)),
          Text("Name: Adwait Bhosale\n",style:TextStyle(fontSize: 25.0,color:Colors.deepOrangeAccent)),
          Text("Branch: Information Technology\n",style:TextStyle(fontSize:25.0,color:Colors.blue)),
          Text("TRF Domain: Programming\n",style:TextStyle(fontSize:25,color:Colors.deepPurpleAccent)),
          Text("Place of Living: Nashik",style:TextStyle(fontSize:25,color:Colors.greenAccent))
        ],
      )
      
    );
  }
}