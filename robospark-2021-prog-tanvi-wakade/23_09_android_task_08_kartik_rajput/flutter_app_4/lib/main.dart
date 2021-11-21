import 'package:flutter/material.dart';

void main() {
  runApp(MyApp());
}

class MyApp extends StatelessWidget {
  @override
  Widget build(BuildContext context) {
    return MaterialApp(
      title: 'Flutter Demo',
      theme: ThemeData(
        primarySwatch: Colors.blue,
      ),
      home: MyHomePage(title: 'Profile Card')
    );
  }
}

class MyHomePage extends StatefulWidget {
  MyHomePage({Key? key, required this.title}) : super(key: key);
  final String title;

  @override
  _MyHomePageState createState() => _MyHomePageState();
}

class _MyHomePageState extends State<MyHomePage> {
  int _counter = 0;
  int i=0;

  void _incrementCounter() {
    setState(() {
      _counter++;
    });
  }

  @override
  Widget build(BuildContext context) {
    return Scaffold(
      appBar: AppBar(
        title: Text(widget.title),
      ),
      body: Center(
        child: Column( 
          mainAxisAlignment: MainAxisAlignment.start,
          children:<Widget>[Padding(
                padding: EdgeInsets.fromLTRB(0,50,0,0), //Container
              ),
             Image.asset('assests/wallpaper.jpg', height: 300, width: 200,), Padding(
                padding: EdgeInsets.fromLTRB(0,10,0,0), //Container
              ),
          Text(
              'Kartik Rajput',style: TextStyle(color: Colors.black, fontSize: 42), 
            ), Padding(
                padding: EdgeInsets.fromLTRB(0,10,0,0), //Container
              ),
            Row(
            mainAxisAlignment: MainAxisAlignment.spaceEvenly,
            children: [Column(mainAxisAlignment: MainAxisAlignment.center,
            children: [
              Text(
              '50',
              style: TextStyle(color: Colors.black, fontSize: 34),
              ),Text(
              'Posts',
            ),], 
            ),Column(mainAxisAlignment: MainAxisAlignment.center,
            children: [Text(
              '$_counter',
              style: TextStyle(color: Colors.black, fontSize: 34),
            ),Text(
              'Followers',
            ),],),Column(mainAxisAlignment: MainAxisAlignment.center,
            children: [Text(
              '50',
              style: TextStyle(color: Colors.black, fontSize: 34),
            ),Text(
              'Following',
            ),],),
            ],
            ),Padding(
                padding: EdgeInsets.fromLTRB(0,20,0,0), child:Text(
              'Student at VIT Pune',
              style: TextStyle(color: Colors.black, fontSize: 22), 
            ), //Container
              ),
            Padding(
                padding: EdgeInsets.fromLTRB(0,20,0,0), //Container
              ),
               Row(mainAxisAlignment: MainAxisAlignment.center, children: [
            FloatingActionButton(onPressed: (){
              setState(() {
                i++;
              });
            }, child: i%2==0?new Icon(Icons.favorite_border,):new Icon(Icons.favorite), foregroundColor: Colors.black, backgroundColor: Colors.white,),
            Padding(
                padding: EdgeInsets.fromLTRB(0,0,30,0), //Container
              ),
             FloatingActionButton.extended(onPressed: _incrementCounter,label: Text("Follow", style: Theme.of(context).textTheme.headline6,), 
             shape: RoundedRectangleBorder(borderRadius: BorderRadius.all(Radius.circular(5)))), 
             Padding(
                padding: EdgeInsets.fromLTRB(0,0,30,0), //Container
              ),
             FloatingActionButton.extended(onPressed: (){},label: Text("Message", style: Theme.of(context).textTheme.headline6, ), foregroundColor: Colors.black,backgroundColor: Colors.white,
             shape: RoundedRectangleBorder(borderRadius: BorderRadius.all(Radius.circular(5),)), ),
             
            ],),    
          ],
        ),
      ),
    );
  }
}
