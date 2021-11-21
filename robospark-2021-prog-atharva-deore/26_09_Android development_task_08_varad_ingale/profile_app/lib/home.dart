import 'package:flutter/material.dart';
import 'package:profile_app/widgets/info_card.dart';

const email = "varad.inagle20@vit.edu";
const phone = "9579339826";
const location = "Bhusawal,Jalgoan,Maharashtra,India";

class HomePage extends StatelessWidget {
  @override
  Widget build(BuildContext context) {
    return Scaffold(
        backgroundColor: Colors.blueGrey[800],
        body: SafeArea(
          minimum: const EdgeInsets.only(top: 100),
          child: Column(
            children: <Widget>[
              CircleAvatar(
                radius: 130,
                backgroundImage: AssetImage('assets/img.jpeg'),
              ),
              Text(
                "Varad Ingle",
                style: TextStyle(
                  fontSize: 40.0,
                  color: Colors.white,
                  fontWeight: FontWeight.bold,
                  // fontFamily: "Pacifico",
                ),
              ),
              Text(
                "Robospark",
                style: TextStyle(
                  fontSize: 30,
                  color: Colors.blueGrey[200],
                  letterSpacing: 2.5,
                  fontWeight: FontWeight.bold,
                  // fontFamily: "Source Sans Pro"
                ),
              ),
              SizedBox(
                height: 20,
                width: 200,
                child: Divider(
                  color: Colors.white,
                ),
              ),

              // we will be creating a new widget name info carrd

              InfoCard(text: phone, icon: Icons.phone, onPressed: () async {}),

              InfoCard(
                  text: location,
                  icon: Icons.location_city,
                  onPressed: () async {}),
              InfoCard(text: email, icon: Icons.email, onPressed: () async {}),
            ],
          ),
        ));
  }
}
