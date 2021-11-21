import React from "react";
import './style.css';
function FuntionalComponent() {
    return(
    
        
        <><h2>Login Page</h2><br /><div className="login">
            <form id="login" method="get" action="login.php">
                <label>Mobile No/User Name

                </label>
                <input type="text" name="Uname" id="Uname" placeholder="Mobile No/User Name" />        <br /><br />
                <label>Password

                </label>
                <input type="Password" name="Pass" id="Pass" placeholder="Password" />
                <br /><br />
                <input type="button" name="log" id="log" value="Log In " />
                <br /><br />
                <input type="checkbox" id="check" />
                <span>Remember me</span>
                <br /><br />

            </form>
        </div></>

    )
}
 export default FuntionalComponent