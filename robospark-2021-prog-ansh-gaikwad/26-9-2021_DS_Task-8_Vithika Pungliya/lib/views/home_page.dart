// ignore_for_file: use_key_in_widget_constructors, prefer_const_constructors

import 'package:flutter/material.dart';
import 'package:url_launcher/url_launcher.dart';
class HomePage extends StatelessWidget {
  @override
  Widget build(BuildContext context) {
    return Scaffold(
      appBar: AppBar(
        title: Text('BAR'),
        centerTitle: true,
        backgroundColor:Colors.orangeAccent,

      ),
      body: Column(
        children: [
          
      Container(

          
          padding: EdgeInsets.only(left: 50,top: 5),
          child: Image.asset('assets/Image.jpeg',
          height: 350,
          fit: BoxFit.fill,
          ),
      ),
      Container(
        padding: EdgeInsets.all(20),
        
        margin: EdgeInsets.symmetric(vertical: 5,horizontal: 5),
       
        child: Text('VITHIKA PUNGLIYA' ),
      ),
      Container(
        padding: EdgeInsets.all(20),
        
        margin: EdgeInsets.symmetric(vertical: 5,horizontal: 5),
       
        child: Text('ROLL No: 34' ),
      ),
      Container(
        padding: EdgeInsets.all(20),
        
        margin: EdgeInsets.symmetric(vertical: 5,horizontal: 5),
       
        child: Text('GR NO: 12011093' ),
      ),
      Container(
        padding: EdgeInsets.all(5),
        
        margin: EdgeInsets.symmetric(horizontal: 10),
        
        child:Text('AI & DS') ,
      ),
      Container(
              
              child: ElevatedButton(
              onPressed: _launchURL,
              child: Text('Show')
              
      ),
        decoration: BoxDecoration(
            borderRadius: BorderRadius.vertical(
              bottom: Radius.circular(3),
              
            ),
      )
      )
  ],
      ),
      
      
        
        );


  }
}
_launchURL() async {
  const url = 'https://www.linkedin.com/in/vithika-pungliya-8b10b5206/';
  await launch(url);
}