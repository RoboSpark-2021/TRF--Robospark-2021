
import './Login.css';
function Login(){

    return(
<div>
<section className="sectionblock">
<div className="block">
<div className='title'>
    <h3>LOGIN</h3>
    </div>

    <input type="text" value="Username"  className='blockElements'/  >
   

    
    <input type="text" value="Password"  className='blockElements'/  >  

<div class="text">
    Forgot Password?
</div>
    <input type="submit" value="Submit"  class='blockElementsButton'/ >



</div>
</section>
</div>
    );
}

export default Login;