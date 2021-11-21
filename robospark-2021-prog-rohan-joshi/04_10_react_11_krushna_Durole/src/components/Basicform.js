import  React from 'react';

const Basicform = () => 
{
    return(
        <div class = "maindiv">
            <div class= "formdiv">

        <form action = ""class = "form">
            <div class = "divemail">
                <label htmlFor ="email" class = "email">Email........</label>
                <input type= "text" name = "Email" id = "Email" autoComplete = "offf"  class = "email"></input>
            </div>

            <div class ="divpassword">
                <label htmlFor ="email" class = "password">password</label>
                <input type= "text" name = "password" id = "password"autoComplete = "offf"class = "password"></input>
            </div>
        
            <button  type="submit" class ="button" >
                Login 
            </button>
        </form>
            </div >
       </div>
    )
    
}
export default Basicform;