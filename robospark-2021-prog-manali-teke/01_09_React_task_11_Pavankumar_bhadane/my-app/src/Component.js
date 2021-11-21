import React from 'react'
import './component.css'
export default function Component() {
    return (
        <div>
            <section>
        <div className="parent">
            <div className="head">
                <h2>LOGIN</h2>
            </div>
            <div className="form">
                <input className="name" type="text" placeholder="Username"/>
                <input className="name" type="password" placeholder="Password"/>
            </div>
            <p>Forgot Password?</p>
            <div className="btn">
                <button type="submit">Submit</button>                
            </div>

        </div>
    </section>
        </div>
    )
}
