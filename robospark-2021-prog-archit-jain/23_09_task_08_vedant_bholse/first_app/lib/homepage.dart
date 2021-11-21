import 'package:first_app/stat_widget.dart';
import 'package:flutter/material.dart';

class Homepage extends StatelessWidget {
  const Homepage({Key? key}) : super(key: key);

  @override
  Widget build(BuildContext context) {
    return Scaffold(
      backgroundColor: Colors.white,
      appBar: AppBar(
        title: Text(
          "Profile Page",
          style: TextStyle(color: Colors.black, fontSize: 30),
        ),
        backgroundColor: Colors.white,
        elevation: 0.0,
      ),
      body: Center(
        child: Column(
          mainAxisAlignment: MainAxisAlignment.center,
          crossAxisAlignment: CrossAxisAlignment.center,
          children: [
            CircleAvatar(
              radius: 90,
              backgroundImage: AssetImage("assets/images/myimg.jpeg"),
            ),
            SizedBox(
              height: 14,
            ),
            Text(
              "Vedant Bhosle",
              style: TextStyle(
                  color: Colors.black,
                  fontSize: 30,
                  fontWeight: FontWeight.bold),
            ),
            Text(
              "@Vedant_Bhosle_007",
              style: TextStyle(
                  color: Colors.black,
                  fontSize: 18,
                  fontWeight: FontWeight.w600),
            ),
            SizedBox(
              height: 20,
            ),
            Row(
              mainAxisAlignment: MainAxisAlignment.center,
              crossAxisAlignment: CrossAxisAlignment.center,
              children: [
                statWidget("0", "Posts"),
                statWidget("233", "Followers"),
                statWidget("264", "Following")
              ],
            ),
            SizedBox(height: 30),
            Row(
              mainAxisAlignment: MainAxisAlignment.center,
              children: [
                FlatButton(
                  onPressed: () {},
                  color: Colors.black,
                  child: Text(
                    "Follow",
                    style: TextStyle(
                        color: Colors.white,
                        fontWeight: FontWeight.bold,
                        fontSize: 18),
                  ),
                  padding: EdgeInsets.symmetric(horizontal: 50, vertical: 8),
                ),
                SizedBox(
                  width: 20,
                ),
                OutlineButton(
                  onPressed: () {},
                  child: Text(
                    "Message",
                    style: TextStyle(
                        color: Colors.black,
                        fontWeight: FontWeight.bold,
                        fontSize: 18),
                  ),
                  padding: EdgeInsets.symmetric(horizontal: 50, vertical: 8),
                )
              ],
            ),
            Padding(
              padding: const EdgeInsets.all(30.0),
              child: Divider(
                height: 40,
                thickness: 0.6,
                color: Colors.black54,
              ),
            ),
            Expanded(child: Container()),
          ],
        ),
      ),
    );
  }
}
