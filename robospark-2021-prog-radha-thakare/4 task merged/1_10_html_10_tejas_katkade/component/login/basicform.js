import  React from 'react'

const Basicform = () => {
    return(
        <>
         <section  class="outer">
      <div class="inner">
        <div class="heading">
            <h1 >login</h1>
             </div>
       
        <div class="form">
            <input type='text' placeholder="Username" required/>
            <input type='email' placeholder="Gmail" required/>
            <input type='password' placeholder="Password" required/>
            <a href="#">forget password?</a>
            <input class="button" type="submit"/>
        </div>
      
      </div>
    </section>
        </>
    )
}

export default Basicform