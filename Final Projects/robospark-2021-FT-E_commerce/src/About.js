import './About.css';
import React from "react";

function about() {
  return (
    <body>
      <div class="header"> 
  <a href="/home" class="logo">E-commmerce - About</a>
  <div class="header-right">
    <a href="/home">Home</a>
    <a href="/cart">Cart</a>
    <a class="active" href="#about">About</a>
  </div>
  </div><br></br><br></br><br></br>

  <h1 className="about">TRF Final Task</h1><br></br><br></br>
  <h2 className="about">-- Group Members --</h2>
  <h3 className="about">Omkar More</h3>
  <h3 className="about">Kartik Rajput</h3>
  <h3 className="about">Krushna Durole</h3>
  </body>
  );
  
}

export default about;