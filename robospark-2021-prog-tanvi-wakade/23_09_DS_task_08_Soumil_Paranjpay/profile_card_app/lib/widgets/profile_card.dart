import 'package:flutter/material.dart';
import 'package:font_awesome_flutter/font_awesome_flutter.dart';

class ProfileCard extends StatelessWidget {
  const ProfileCard({
    Key? key,
  }) : super(key: key);

  @override
  Widget build(BuildContext context) {
    return Scaffold(
      backgroundColor: Colors.indigo.shade400,
      body: SafeArea(
        child: Container(
          width: double.infinity,
          child: Column(
            mainAxisAlignment: MainAxisAlignment.center,
            crossAxisAlignment: CrossAxisAlignment.center,
            children: <Widget>[
              CircleAvatar(
                  radius: 60.0,
                  backgroundImage: AssetImage('assets/ProfilePicture.jpg')),
              SizedBox(height: 20),
              Text(
                'Soumil Paranjpay',
                style: TextStyle(
                  fontWeight: FontWeight.bold,
                  fontSize: 32.0,
                  color: Colors.white,
                ),
              ),
              Text('ENTC Student at VIT Pune, eager to learn and collaborate!',
                  style: TextStyle(
                    fontSize: 18.0,
                    letterSpacing: 2.5,
                    color: Colors.blue.shade50,
                    fontStyle: FontStyle.italic,
                  ),
                  textAlign: TextAlign.center),
              Container(
                width: 200.0,
                margin: EdgeInsets.symmetric(vertical: 8.0),
                child: Divider(
                  color: Colors.white,
                ),
              ),
              Card(
                margin: EdgeInsets.symmetric(horizontal: 48.0, vertical: 8.0),
                child: ListTile(
                  leading: Icon(
                    Icons.phone,
                    color: Colors.teal.shade400,
                  ),
                  title: Text(
                    '+91 9999999999',
                    style: TextStyle(
                      color: Colors.teal.shade400,
                    ),
                  ),
                ),
              ),
              Card(
                margin: EdgeInsets.symmetric(horizontal: 48.0, vertical: 8.0),
                child: ListTile(
                  leading: Icon(
                    Icons.email,
                    color: Colors.teal.shade400,
                  ),
                  title: Text(
                    'soumil.paranjpay@gmail.com',
                    style: TextStyle(
                      color: Colors.teal.shade400,
                    ),
                  ),
                ),
              ),
              SizedBox(height: 100),
              Row(
                mainAxisAlignment: MainAxisAlignment.center,
                children: const <Widget>[
                  FaIcon(
                    FontAwesomeIcons.github,
                    size: .0,
                    semanticLabel: 'Text to announce in accessibility modes',
                  ),
                  SizedBox(width: 10),
                  FaIcon(
                    FontAwesomeIcons.instagram,
                    size: 30.0,
                  ),
                  SizedBox(width: 10),
                  FaIcon(
                    FontAwesomeIcons.linkedin,
                    size: 30.0,
                  ),
                ],
              )
            ],
          ),
        ),
      ),
    );
  }
}
