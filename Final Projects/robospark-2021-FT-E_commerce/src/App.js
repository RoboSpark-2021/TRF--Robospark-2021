import './App.css';
import React from "react";
import {Link } from "react-router-dom";

function App() {
  return (
    <body>
      <div className="header"> 
  <a href="/home" classname="logo">E-commmerce</a>
  <div className="header-right">
    <a className="active" href="/home">Home</a>
    <a href="/cart">Cart</a>
    <a href="/about">About</a>
  </div>
  </div><br></br><br></br><br></br>
  <a href="/mobiles">
      <img className="im1" src="https://rukminim1.flixcart.com/flap/3006/433/image/f53db3179f88fdf5.jpg?q=50" alt=""></img></a><br></br><br></br>
  <a href="/groccery">    
      <img className="im1" src="https://i.ibb.co/Vp7vWLs/g14.png" alt=""></img><br></br><br></br></a>
    <a href='/Clothes'>
      <img className="im1" src="https://i.ibb.co/hMMhkL0/c14.png" alt=""></img></a>
    </body>
  );
}

export default App;
