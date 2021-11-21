


import './App.css';
import React from "react";
// import {Link } from "react-router-dom";
import'./Clothes'
import './cart.css';
import './cart.js';
import Cartf from './components/Cartf';
const App = () =>{
  return (


    <body>
      <div class="header"> 
  <a href="/home" class="logo">E-commmerce</a>
  
  <div class="header-right">
    <a class="active" href="/home">Home</a>
    {/* <a  class = "active" href = "/cart"> cart </a> */}
    <a class = "active" href="/about">About</a>
    <a class = "active" href = "/Cartf"> cartf </a>
  </div>
  </div><br></br><br></br><br></br>
  <a href="/Clothes">
      <img class="im1" src="c14.png" alt="" >
        </img></a><br></br><br></br>
      <img class="im1" src="e14.png" alt="">
        </img><br></br><br></br>
      <img class="im1" src="g14.png" alt="" ></img>
   
{/*     
      <Switch>
        <Route exact path = '/' component = {about} />
        <Route exact path = '/' component = {Home} />
        <Route exact path = '/' component = {cart} />

      </Switch> */}
    {/* <Cartf/> */}
    


     </body>
  );
}

export default App;



















