import React, {useState} from 'react' ;
import ReactDOM from 'react-dom';
import './ecom.css' ;

var a = 0;
var b = 0;
var cart = "Cart("+a+")";

function Mobiles() {
    return (
        <body>
            <script>
                var a = 0;
            </script>
            <div className="header">
  <a href="/home" className="logo">E-commmerce - Mobiles</a>
  <div className="header-right">
  <a><input type="text" 
//   onKeyUp={Search()} 
  placeholder="Search" id="Search" ></input></a> 
    <a href="/home">Home</a>
    <a href="/Cart" id="cart" title={b} >Cart</a>
    <a href="/about">About</a>
  </div>
  </div><br></br><br></br><br></br>
  <div className="row">
  <div className="column">
      {/* <pro id="product"> */}
  <Card img ="https://rukminim1.flixcart.com/image/416/416/kkh6zrk0/mobile/s/n/p/x7-rmx3092-realme-original-imafztjzggzsnks2.jpeg?q=70"
             name = "realme X7 5G" specs="Nebula, 128GB" price = "21,999"><a>Realme X7 5G</a></Card>
             {/* </pro> */}
  </div>
  <div className="column">
  <Card img ="https://rukminim1.flixcart.com/image/416/416/kq18n0w0/mobile/d/b/6/narzo-30-5g-rmx3242-realme-original-imag45yjub2vdrzx.jpeg?q=70"
             name = "realme narzo 30 5G" specs="Racing silver, 64GB" price = "14,999" />
  </div>
  <div className="column">
  <Card img ="https://rukminim1.flixcart.com/image/416/416/ku5ufm80/mobile/q/s/c/edge-20-pro-pany0009in-motorola-original-imag7csrdfzh6eqh.jpeg?q=70"
             name = "Motorola Edge 20 Pro" specs="Midnight Sky, 128 GB" price = "36,999" />
  </div>
  <div className="column">
  <Card img ="https://rukminim1.flixcart.com/image/416/416/ksez24w0/mobile/2/n/9/edge-20-par00010in-motorola-original-imag5yv7sghmkgqg.jpeg?q=70"
             name = "Motorola Edge 20" specs="Frosted Emerald, 128 GB" price = "29,999" />
  </div>     
        </div><br></br>

        <div className="row">
  <div className="column">
  <Card img ="https://rukminim1.flixcart.com/image/416/416/ko0d6kw0/mobile/6/h/y/iphone-12-mjnm3hn-a-apple-original-imag2k2v6ehvnzfd.jpeg?q=70"
             name = "APPLE iPhone 12" specs="Purple, 256 GB" price = "75,999" />
  </div>
  <div className="column">
  <Card img ="https://rukminim1.flixcart.com/image/416/416/kg8avm80/mobile/c/v/t/apple-iphone-12-pro-max-dummyapplefsn-original-imafwgcyyahey58k.jpeg?q=70"
             name = "iPhone 12 Pro Max" specs="Pacific Blue, 512 GB" price = "1,49,900" />
  </div>
  <div className="column">
  <Card img ="https://rukminim1.flixcart.com/image/416/416/kr2e3680/mobile/l/p/k/reno6-pro-5g-cph2249-oppo-original-imag4xpc6mc62mzq.jpeg?q=70"
             name = "OPPO Reno6 Pro 5G" specs="Aurora, 256 GB" price = "39,990" />
  </div>
  <div className="column">
  <Card img ="https://rukminim1.flixcart.com/image/416/416/jjg15zk0/mobile/s/p/d/oppo-find-x-cph1871-original-imaf7ywhqmckb6w9.jpeg?q=70"
             name = "OPPO Find X" specs="Bordeaux Red, 256 GB" price = "60,990" />
  </div>     
        </div><br></br>

        <div className="row">
  <div className="column">
  <Card img ="https://rukminim1.flixcart.com/image/416/416/kkh6zrk0/mobile/s/n/p/x7-rmx3092-realme-original-imafztjzggzsnks2.jpeg?q=70"
             name = "realme X7 5G" specs="Nebula, 128GB" price = "21,999" />
  </div>
  <div className="column">
  <Card img ="https://rukminim1.flixcart.com/image/416/416/kq18n0w0/mobile/d/b/6/narzo-30-5g-rmx3242-realme-original-imag45yjub2vdrzx.jpeg?q=70"
             name = "realme narzo 30 5G" specs="Racing silver, 64GB" price = "14,999" />
  </div>
  <div className="column">
  <Card img ="https://rukminim1.flixcart.com/image/416/416/ku5ufm80/mobile/q/s/c/edge-20-pro-pany0009in-motorola-original-imag7csrdfzh6eqh.jpeg?q=70"
             name = "Motorola Edge 20 Pro" specs="Midnight Sky, 128 GB" price = "36,999" />
  </div>
  <div className="column">
  <Card img ="https://rukminim1.flixcart.com/image/416/416/ksez24w0/mobile/2/n/9/edge-20-par00010in-motorola-original-imag5yv7sghmkgqg.jpeg?q=70"
             name = "Motorola Edge 20" specs="Frosted Emerald, 128 GB" price = "29,999" />
  </div>     
        </div><br></br>

        <div className="row">
  <div className="column">
  <Card img ="https://rukminim1.flixcart.com/image/416/416/ko0d6kw0/mobile/6/h/y/iphone-12-mjnm3hn-a-apple-original-imag2k2v6ehvnzfd.jpeg?q=70"
             name = "APPLE iPhone 12" specs="Purple, 256 GB" price = "75,999" />
  </div>
  <div className="column">
  <Card img ="https://rukminim1.flixcart.com/image/416/416/kg8avm80/mobile/c/v/t/apple-iphone-12-pro-max-dummyapplefsn-original-imafwgcyyahey58k.jpeg?q=70"
             name = "iPhone 12 Pro Max" specs="Pacific Blue, 512 GB" price = "1,49,900" />
  </div>
  <div className="column">
  <Card img ="https://rukminim1.flixcart.com/image/416/416/kr2e3680/mobile/l/p/k/reno6-pro-5g-cph2249-oppo-original-imag4xpc6mc62mzq.jpeg?q=70"
             name = "OPPO Reno6 Pro 5G" specs="Aurora, 256 GB" price = "39,990" />
  </div>
  <div className="column">
  <Card img ="https://rukminim1.flixcart.com/image/416/416/jjg15zk0/mobile/s/p/d/oppo-find-x-cph1871-original-imaf7ywhqmckb6w9.jpeg?q=70"
            name = "OPPO Find X" specs="Bordeaux Red, 256 GB" price = "60,990" />
  </div>     
        </div><br></br>
        
        </body>
    )
    
}

// function Search() {
//     var input, filter, pro, c, a, i, txtValue;
//     input = document.getElementById("Search");
//     filter = input.value.toUpperCase();
//     pro = document.getElementById("product");
//     c = pro.getElementsByTagName('Card');
  
//     for (i = 0; i < c.length; i++) {
//     a = c[i].getElementsByTagName("a")[0];
//       txtValue = a.textContent || a.innerText;
//       if (txtValue.toUpperCase().indexOf(filter) > -1) {
//         c[i].style.display = "";
//       } else {
//         c[i].style.display = "none";
//       }
//     }
// }

// function Search(){
//     const searchbar = document.getElementById("Search");
//     if(searchbar){
//     searchbar.addEventListener('keyup', (e) => {
//         console.log(e.target.value);
//     });}
//     console.log(searchbar);
// }

function Card(props){
    return (
        <div className ="Card">
            <img src={props.img} alt={props.name}></img>
        <h1>{props.name}</h1>
        <p>{props.specs}</p>
        <p className="price">₹{props.price}</p>
        <p><button onKeyPress={addtocart(props.price)}>Add to Cart</button></p>
        </div>
    )
}

function addtocart(m){
    a+=1;
    b+={m};
    if(document.getElementById("cart")){
        ReactDOM.render(cart, document.getElementById('cart').innerHTML);
        ReactDOM.render("₹"+b, document.getElementById('cart').title);}
    
}

    
export default Mobiles;