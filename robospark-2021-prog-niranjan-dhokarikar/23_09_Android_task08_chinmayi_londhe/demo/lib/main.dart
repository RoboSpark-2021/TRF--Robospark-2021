

import 'dart:ui';

import 'package:flutter/material.dart';
import 'package:google_fonts/google_fonts.dart';
//import 'package:gradient_app_bar/gradient_app_bar.dart';

void main(){
  runApp(MyApp());
}

class MyApp extends StatelessWidget {
    @override
    Widget build(BuildContext context) {
      return MaterialApp(

        home: Scaffold(
          
          appBar: AppBar(
            backgroundColor: Colors.orange.shade300,
            elevation: 5,
            title: Text("Profile",style: GoogleFonts.oswald(color:Colors.black,fontSize: 35),),
          ),
          body: Container(
            decoration: BoxDecoration(
              gradient: LinearGradient(
                colors: [
                Colors.blue.shade200,
                Colors.white,
                Colors.blueGrey.shade200,
                Colors.blue.shade100,

                ]
                ),
            ),
            padding: EdgeInsets.only(left: 16,top: 20,right: 16),
            child:Column(
              
              children: [
                ListView(
                  shrinkWrap: true,
                  children: [
                    
                    SizedBox(
                      height: 15,
                    ),

                   Center(
                     child: Stack(
                       
                       children: [
                         Container(
                           width: 200,
                           height: 200,
                           decoration: BoxDecoration(
                             border: Border.all(
                               width: 4,
                               color: Theme.of(context).scaffoldBackgroundColor
                             ),
                             boxShadow:[
                               BoxShadow(
                                 spreadRadius: 2,blurRadius: 10,
                                 color: Colors.black.withOpacity(0.1),
                                 offset: Offset(0,10)
                               )
                             ],
                             shape: BoxShape.circle,
                             image: DecorationImage(
                               fit: BoxFit.cover,
                               image: AssetImage('images/img1.jpeg'),
                             ),
                           ),
                         ),

                       ],
                     ),
                   ),
                   Column(
                     children: [
                       SizedBox(
                         height: 25,
                       ),
                       Center(
                         child: Text('Chinmayi Londhe',style:GoogleFonts.baskervville(
                           textStyle: TextStyle(color: Colors.black87, letterSpacing: .5,fontWeight: FontWeight.bold,fontSize: 30),
                         ),
                         ),
                       )
                     ],
                   ),
                   SizedBox(
                         height: 20,
                       ),
                    Container(
                      padding: EdgeInsets.all(20),
                      decoration:BoxDecoration(
                       borderRadius: BorderRadius.circular(20),
                      color: Colors.white,
                      boxShadow: [
                        BoxShadow(
                          offset: Offset(0,4),
                          blurRadius: 30,
                          color: Colors.grey
                        )
                      ]
                       ),

                      child: Row(
                        mainAxisAlignment:MainAxisAlignment.spaceBetween ,
                        children: <Widget>[
                          Counter(
                            color:Colors.deepPurple,
                            value: "COLLEGE",
                            title: "VIT",
                          ),
                          Counter(
                            color: Colors.red,
                            value: "BRANCH",
                            title: "CS",
                          ),
                          Counter(
                            color: Colors.red,
                            value: "DIV",
                            title: "B",
                          )
                        ],
                      ),
                    ),
                    SizedBox(height: 30,),
                   Column(
                     mainAxisAlignment: MainAxisAlignment.center,
                     children: <Widget>[
                    
                        Text("About",style: TextStyle(fontSize: 30,fontWeight: FontWeight.bold,fontFamily:'RobotMono',color: Colors.green),),
                       SizedBox(height: 20,),
                        Text("I'm a SY B.Tech student fascinated about technology and interested in making amazing Projects.Excited to learn new cool things in TRF!!",
                        style: TextStyle
                        (fontSize: 20,
                        fontWeight: FontWeight.bold,
                        fontStyle: FontStyle.italic,
                        color: Colors.black87
                        
                        )
                        ),
                   ],
                   )

                   
                  ],
                ),
              ],
            ),
          ),
        ),
      );
    }
  }

class Counter extends StatelessWidget {
  final String value;
  final Color color;
  final String title;
  
  const Counter({
    Key? key,
      required this.value, 
     required this.color, 
     required this.title,
  }) : super(key: key);

  @override
  Widget build(BuildContext context) {
    return Column(
      children: <Widget>[
       
        Text(value,style: TextStyle(fontWeight: FontWeight.bold,fontSize: 21,color: Colors.red),),
        SizedBox(height: 5,),
        Text(title,style: TextStyle(fontWeight: FontWeight.bold,fontSize: 20 ,color: Colors.black),)
      ],
    );
  }
}
  
  
         
            
        
      
    
  
  