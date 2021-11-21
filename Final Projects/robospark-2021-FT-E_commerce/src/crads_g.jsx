import React from 'react' ;
import ReactDOM from 'react-dom';
import './ecom.css' ;

function Groccery() {
    return (
        <body>
            <div class="header">
  <a href="/home" class="logo">E-commmerce - Groceries</a>
  <div class="header-right">
    <a href="/home">Home</a>
    <a href="/Cart">Cart</a>
    <a href="#about">About</a>
  </div>
  </div><br></br><br></br><br></br>
  
  <div class="row">
  <div class="column">
  <Card img ="https://images.unsplash.com/photo-1574323347407-f5e1ad6d020b?ixid=MnwxMjA3fDB8MHxwaG90by1wYWdlfHx8fGVufDB8fHx8&ixlib=rb-1.2.1&auto=format&fit=crop&w=1089&q=80"
             name = "Wheat" specs="" price = "50/kg" />
  </div>
  <div class="column">
  <Card img ="https://images.unsplash.com/photo-1586201375761-83865001e31c?ixlib=rb-1.2.1&ixid=MnwxMjA3fDB8MHxwaG90by1wYWdlfHx8fGVufDB8fHx8&auto=format&fit=crop&w=1170&q=80"
             name = "Rice" specs="Basmati" price = "60/kg" />
  </div>
  <div class="column">
  <Card img ="https://images.unsplash.com/photo-1519666213631-be6e024eac6a?ixlib=rb-1.2.1&ixid=MnwxMjA3fDB8MHxwaG90by1wYWdlfHx8fGVufDB8fHx8&auto=format&fit=crop&w=399&q=80"
             name = "sauce" specs="tomato ketchup" price = "120/-" />
  </div>
  <div class="column">
  <Card img ="https://images.unsplash.com/photo-1604514813560-1e4f5726db65?ixlib=rb-1.2.1&ixid=MnwxMjA3fDB8MHxwaG90by1wYWdlfHx8fGVufDB8fHx8&auto=format&fit=crop&w=1170&q=80"
             name = "Chocolate" specs="darkB" price = "150/-" />
  </div>     
        </div><br></br>

        <div class="row">
  <div class="column">
  <Card img ="https://images.unsplash.com/photo-1563636619-e9143da7973b?ixlib=rb-1.2.1&ixid=MnwxMjA3fDB8MHxwaG90by1wYWdlfHx8fGVufDB8fHx8&auto=format&fit=crop&w=1965&q=80"
             name = "milk" specs="cow" price = "60/L" />
  </div>
  <div class="column">
  <Card img ="https://images.unsplash.com/photo-1569870499705-504209102861?ixlib=rb-1.2.1&ixid=MnwxMjA3fDB8MHxwaG90by1wYWdlfHx8fGVufDB8fHx8&auto=format&fit=crop&w=415&q=80"
             name = "Apples" specs="hybrid" price = "50/kg" />
  </div>
  <div class="column">
  <Card img ="https://images.unsplash.com/photo-1571771894821-ce9b6c11b08e?ixid=MnwxMjA3fDB8MHxwaG90by1wYWdlfHx8fGVufDB8fHx8&ixlib=rb-1.2.1&auto=format&fit=crop&w=880&q=80"
             name = "banana" specs="" price = "70/kg" />
  </div>
  <div class="column">
  <Card img ="https://images.unsplash.com/photo-1526947425960-945c6e72858f?ixlib=rb-1.2.1&ixid=MnwxMjA3fDB8MHxwaG90by1wYWdlfHx8fGVufDB8fHx8&auto=format&fit=crop&w=1170&q=80"
             name = "coconut oil" specs="" price = "80/-" />
  </div>     
        </div><br></br>

        <div class="row">
  <div class="column">
  <Card img ="https://images.unsplash.com/photo-1574323347407-f5e1ad6d020b?ixid=MnwxMjA3fDB8MHxwaG90by1wYWdlfHx8fGVufDB8fHx8&ixlib=rb-1.2.1&auto=format&fit=crop&w=1089&q=80"
             name = "Wheat" specs="" price = "50/kg" />
  </div>
  <div class="column">
  <Card img ="https://images.unsplash.com/photo-1586201375761-83865001e31c?ixlib=rb-1.2.1&ixid=MnwxMjA3fDB8MHxwaG90by1wYWdlfHx8fGVufDB8fHx8&auto=format&fit=crop&w=1170&q=80"
             name = "Rice" specs="Basmati" price = "60/kg" />
  </div>
  <div class="column">
  <Card img ="https://images.unsplash.com/photo-1519666213631-be6e024eac6a?ixlib=rb-1.2.1&ixid=MnwxMjA3fDB8MHxwaG90by1wYWdlfHx8fGVufDB8fHx8&auto=format&fit=crop&w=399&q=80"
             name = "sauce" specs="tomato ketchup" price = "120/-" />
  </div>
  <div class="column">
  <Card img ="https://images.unsplash.com/photo-1604514813560-1e4f5726db65?ixlib=rb-1.2.1&ixid=MnwxMjA3fDB8MHxwaG90by1wYWdlfHx8fGVufDB8fHx8&auto=format&fit=crop&w=1170&q=80"
             name = "Chocolate" specs="darkB" price = "150/-" />
  </div>     
        </div><br></br>

        <div class="row">
  <div class="column">
  <Card img ="https://images.unsplash.com/photo-1563636619-e9143da7973b?ixlib=rb-1.2.1&ixid=MnwxMjA3fDB8MHxwaG90by1wYWdlfHx8fGVufDB8fHx8&auto=format&fit=crop&w=1965&q=80"
             name = "milk" specs="cow" price = "60/L" />
  </div>
  <div class="column">
  <Card img ="https://images.unsplash.com/photo-1569870499705-504209102861?ixlib=rb-1.2.1&ixid=MnwxMjA3fDB8MHxwaG90by1wYWdlfHx8fGVufDB8fHx8&auto=format&fit=crop&w=415&q=80"
             name = "Apples" specs="hybrid" price = "50/kg" />
  </div>
  <div class="column">
  <Card img ="https://images.unsplash.com/photo-1571771894821-ce9b6c11b08e?ixid=MnwxMjA3fDB8MHxwaG90by1wYWdlfHx8fGVufDB8fHx8&ixlib=rb-1.2.1&auto=format&fit=crop&w=880&q=80"
             name = "banana" specs="" price = "70/kg" />
  </div>
  <div class="column">
  <Card img ="https://images.unsplash.com/photo-1526947425960-945c6e72858f?ixlib=rb-1.2.1&ixid=MnwxMjA3fDB8MHxwaG90by1wYWdlfHx8fGVufDB8fHx8&auto=format&fit=crop&w=1170&q=80"
             name = "coconut oil" specs="" price = "80/-" />
  </div>     
        </div><br></br>

  
        </body>
    )
}

function Card(props){
    return (
        <div className ="Card">
            <img src={props.img} alt={props.name}></img>
        <h1>{props.name}</h1>
        <p>{props.specs}</p>
        <p class="price">₹{props.price}</p>
        <p><button>Add to Cart</button></p>
        </div>
    )
}

    
export default Groccery;