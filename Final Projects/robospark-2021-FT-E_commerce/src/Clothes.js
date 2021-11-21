import './Clothes.css';
import React from "react";
import { Link } from 'react-router-dom';
const  Clothes =() =>{
    return(
    <body>
      <div class="header-right">
    <a class="active" href="/home">Home</a>
    <a  class = "active" href = "/cart"> cart </a>
    
    <a href="about">About</a>
  </div>

  <div>

   <div class = "toplabel">
    <h1> <label>Category : Clothes</label></h1>
      
        
  </div>
   <h2>Trouser for men :</h2> <br/>
    <div class = " whole row column margin2 ">
       <div class="card image whole dim" >
    <img class = "image" 
        src="https://rukminim1.flixcart.com/image/580/696/ku79vgw0/trouser/y/m/o/32-petfonsp523318-peter-england-original-imag7dkwpkgjyprm.jpeg?q=50"></img>
        <h4>Allen Solly </h4>
        <p id = "first">Antibacterial Slim Fit Men Blue Cotton Blend Trousers</p>
        <p class="price">₹2,099</p>
        <p><button onClick= "add()">Add to Cart</button></p>
        
      </div> 
      
      <br/> <br/> <br/> <br/> <br/> <br/>
      <div class="card image whole dim" >
        <img class = "image"
        src="https://rukminim1.flixcart.com/image/880/1056/kcuug7k0/trouser/d/u/r/36-pm211269-light-khaki-pepe-jeans-original-imaftvzdbpzzh4hw.jpeg?q=50"></img>
        <h4>Pepe Jeans</h4>
        <p>Regular Fit Men Brown Cotton Blend Trousers</p>
        <p class="price">₹1,131</p>
        <p><button>Add to Cart</button></p>
      </div> 
      
      <br/> <br/> <br/> <br/> <br/> <br/>
      <div class="card image whole dim" >
        <img class = "image"
        src="https://rukminim1.flixcart.com/image/714/857/kndi4y80/trouser/y/a/3/32-vstfwtrbm38970-academy-by-van-heusen-original-imag22hvackzb5rw.jpeg?q=50"></img>
        <h4>Van Heusen with special design</h4>
        <p>Tapered  Black Cotton Lycra Blend Trousers</p>
        <p class="price">₹1,189₹</p>
        <p><button>Add to Cart</button></p>
      </div> 
      
      <br/> <br/> <br/> <br/> <br/> <br/>
      <div class="card image whole dim" >
        <img class = "image"
        src="https://rukminim1.flixcart.com/image/714/857/k6nxrbk0/trouser/y/u/f/28-kctr-5555-crm-fubar-original-imafp2j6pdqymytg.jpeg?q=50"></img>
        <h4>FUBAR </h4>
        <p>Slim Fit Men Cream Cotton Blend Trousers suits to silvery shirt</p>
        <p class="price">₹563</p>
        <p><button>Add to Cart</button></p>
      </div> 
      
      <br/> <br/> <br/> <br/> <br/> <br/>
      {/* <div class="card image whole " >
        <img class = "image"
        src="https://rukminim1.flixcart.com/image/714/857/kflftzk0-0/trouser/a/9/n/30-kctr-5555-nb-fubar-original-imafwyf6kagdfxvv.jpeg?q=50"></img>
        <h4>FUBAR </h4>
        <p>Slim Fit Men Blue Cotton Blend Trousers comfortable</p>
        <p class="price">₹564</p>
        <p><button>Add to Cart</button></p>
      </div> 
      
      <br/> <br/> <br/> <br/> <br/> <br/>
      <div class="card image whole " >
        <img class = "image"
        src="https://rukminim1.flixcart.com/image/714/857/ku8pbbk0/trouser/j/y/l/32-pctfssspp04489-peter-england-original-imag7em5hqk4wsbd.jpeg?q=50"></img>
        <h4>PETER ENGLAND </h4>
        <p>Slim Fit Men Dark Blue Pure Cotton Trousers</p>
        <p class="price">₹1,399</p>
        <p><button>Add to Cart</button></p>
      </div> 
      
      <br/> <br/> <br/> <br/> <br/> <br/>
      <div class="card image whole " >
        <img class = "image"
        src="https://rukminim1.flixcart.com/image/714/857/kt0enww0/trouser/o/1/b/32-petfonspb36332-peter-england-original-imag6g35sqcfhj75.jpeg?q=50"></img>
        <h4>PETER ENGLAND </h4>
        <p>Slim Fit Men Grey Polyester Viscose Blend Trousers</p>
        <p class="price">₹1,199</p>
        <p><button>Add to Cart</button></p>
      </div> 
      
      <br/> <br/> <br/> <br/> <br/> <br/>
       */}
    </div>
    



































 
 


    <div class = "whole row column margin" >
   
      <div class="card image whole  dim " >
        <img class = "image"
        src="https://rukminim1.flixcart.com/image/580/696/ki0loy80-0/t-shirt/g/b/b/l-cv-ts99-vero-lie-original-imafxw9rcs7xdzxd.jpeg?q=50" alt="Printed Men round Neck T-shirt"></img>
        <h4>VERO LIE</h4>
        <p>Printed Men round Neck T-shirt with canada design</p>
        <p class="price">₹327</p>
        <p><button>Add to Cart</button></p>
      </div> 
      
      <br/> <br/> <br/> <br/> <br/> <br/>
      
      <div class="card image  whole  dim " >
        <img class = "image"
        src="https://rukminim1.flixcart.com/image/580/696/km3s1ow0/top/3/e/z/l-prw-1006-prettify-original-imagf2vurykmmbgv.jpeg?q=50" alt="Printed Men round Neck T-shirt"></img>
        <h4>Prettify </h4>
        <p>Casual Regular Sleeves Embellished Women Grey Top</p>
        <p class="price">₹499</p>
        <p><button>Add to Cart</button></p>
      </div> 
      <br/> <br/> <br/> <br/> <br/>


      <div class="card image  whole  dim" >
        <img class = "image"
        src="https://rukminim1.flixcart.com/image/580/696/knj7wcw0/t-shirt/c/o/p/m-tlorblhenful-d37-tripr-original-imag2747grvpz4gq.jpeg?q=50" alt="Printed Men round Neck T-shirt"></img>
        <h4>TRIPR </h4>
        <p>Solid Men Henley Neck Pink, Black T-Shirt</p>
        <p class="price">₹284</p>
        <p><button>Add to Cart</button></p>
      </div> 
      <br/> <br/> <br/> <br/> <br/> <br/>

      <div class="card image  whole dim" >
        <img class = "image"
        src="https://rukminim1.flixcart.com/image/580/696/kflftzk0/top/j/6/z/s-rr-tp193-blezza-original-imafwyzhs3ekwqgf.jpeg?q=50" alt="Printed Men round Neck T-shirt"></img>
        <h4>Blezza </h4>
        <p>Casual Regular Sleeves Solid Women Yellow Top</p>
        <p class="price">₹300</p>

        <p><button>Add to Cart</button></p>
      </div> 
      <br/><br/> <br/> <br/> <br/> <br/> <br/>

      
       {/* <div class="card image  whole" >
      <img class = "image"
        src="https://rukminim1.flixcart.com/image/580/696/kjuby4w0/t-shirt/s/x/z/m-fc4058-fastcolors-original-imafzbj546kdvbh8.jpeg?q=50" alt="Printed Men round Neck T-shirt"></img>
        <br/>
        <h4>FastColors</h4>
        <p>Solid Men Mandarin Collar White, Black T-Shirt</p>
        <p class="price">₹299</p>

        <p><button>Add to Cart</button></p>
      </div> 
      <br/><br/> <br/> <br/> <br/> <br/> <br/> 


      
       <div class="card image  whole" >
        <img class = "image"
        src="https://rukminim1.flixcart.com/image/580/696/k4ss2a80/top/n/z/4/xxl-ft-tp24-fabtak-original-imafnkfchpzvjd3f.jpeg?q=50" alt="Printed Men round Neck T-shirt"></img>
        <br/>
        <h4>FabTak </h4>
        <p>Casual Regular Sleeves Checkered Women Multicolor Top</p>
        <p class="price">₹295</p>

        <p><button>Add to Cart</button></p> <br/><br/> <br/> <br/> <br/> <br/> <br/>
      </div>  
     
       <div class="card image  whole" >
        <img class = "image"
        src="https://rukminim1.flixcart.com/image/580/696/kqco5u80/shirt/q/5/j/l-p1-sht-hood-geographical-plus91-original-imag4dvyghm63gf8.jpeg?q=50" alt="Printed Men round Neck T-shirt"></img>
        <br/>
        <h4>FabTakPlus91  </h4>
        <p>Men Slim Fit Graphic Print Hood Collar Casual Shirt</p>
        <p class="price">₹474</p>

        <p><button>Add to Cart</button></p> <br/><br/> <br/> <br/> <br/> <br/> <br/> */}
      {/* </div>  */}

        
      </div>
      {/* </div> */}

      
  </div>

    

  
      


    </body>);
  }

  export default Clothes;

