import './App.css';

function App() {
  return (
    <div className="container">
        <h1 className="login-heading">Login</h1>
        <div className="input-container">
            <input type="text" placeholder="Username" id="username" className="input" />
            <input type="password" placeholder="Password" id="password" className="input" />
        </div>
        <a href="#" style={{paddingTop: '40px'}}>Forgot password?</a>
        <button className="fp-btn">Submit</button>
    </div>
    )
}

export default App;
