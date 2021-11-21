import "package:flutter/material.dart";

class Home extends StatelessWidget {
  @override
  Widget build(BuildContext context) {
    return Center(
        child: Container(
            padding: EdgeInsets.only(top: 40.0),
            alignment: Alignment.center,
            color: Colors.greenAccent,
            child: Column(
              children: [
                pic(),
                Expanded(
                    child: Text(
                  "Aditya W.",
                  textDirection: TextDirection.ltr,
                  style: TextStyle(
                      decoration: TextDecoration.none,
                      fontSize: 30.0,
                      fontFamily: 'Raleway',
                      fontWeight: FontWeight.w700,
                      color: Colors.deepPurple),
                )),
                Row(
                  children: [
                    Expanded(
                        child: Text(
                      "     Followers",
                      textDirection: TextDirection.ltr,
                      style: TextStyle(
                          decoration: TextDecoration.none,
                          fontSize: 30.0,
                          fontFamily: 'Raleway',
                          fontWeight: FontWeight.w700,
                          color: Colors.black),
                    )),
                    Expanded(
                        child: Text(
                      "   Following",
                      textDirection: TextDirection.ltr,
                      style: TextStyle(
                          decoration: TextDecoration.none,
                          fontSize: 30.0,
                          fontFamily: 'Raleway',
                          fontWeight: FontWeight.w700,
                          color: Colors.black),
                    )),
                  ],
                ),
                Row(
                  children: [
                    Expanded(
                        child: Text(
                      "       1000",
                      textDirection: TextDirection.ltr,
                      style: TextStyle(
                          decoration: TextDecoration.none,
                          fontSize: 40.0,
                          fontFamily: 'Raleway',
                          fontWeight: FontWeight.w700),
                    )),
                    Expanded(
                        child: Text(
                      "     1000",
                      textDirection: TextDirection.ltr,
                      style: TextStyle(
                          decoration: TextDecoration.none,
                          fontSize: 40.0,
                          fontFamily: 'Raleway',
                          fontWeight: FontWeight.w700),
                    )),
                  ],
                ),
                Expanded(
                    child: Text(
                  "Hey there!",
                  textDirection: TextDirection.ltr,
                  style: TextStyle(
                      decoration: TextDecoration.none,
                      fontSize: 30.0,
                      fontFamily: 'Raleway',
                      fontWeight: FontWeight.w700,
                      color: Colors.orange),
                ))
              ],
            )));
  }
}

class pic extends StatelessWidget {
  @override
  Widget build(BuildContext context) {
    AssetImage assetImage = AssetImage('images/adi.jpg');
    Image image = Image(
      image: assetImage,
      width: 350.0,
      height: 350.0,
    );
    return Container(
      child: image,
    );
  }
}
