import  React from 'react'

const Basicform = () => {
    return(
        <>
         <section  class="outer">
      <div class="inner">
        <div class="heading">
            <h1 >LOGIN</h1>
             </div>
       
        <div class="form">
            <input type='text' placeholder="Username" required/>
            <input type='password' placeholder="Password" required/>
            <a href="#">Forgot Password</a>
            <input class="button" type="submit"/>
        </div>
      
      </div>
    </section>
        </>
    )
}

export default Basicform