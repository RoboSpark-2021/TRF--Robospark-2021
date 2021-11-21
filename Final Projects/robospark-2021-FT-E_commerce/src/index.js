import React from 'react';
import ReactDOM from 'react-dom';
import { BrowserRouter, Route, Switch } from "react-router-dom";
import './index.css';
import App from './App';
import Mobiles from './crads';
import Cart from'./cart';
import about from'./About';
import Groccery from './crads_g';
import Clothes from './Clothes';
import reportWebVitals from './reportWebVitals';

const rootElement = document.getElementById("root");
    ReactDOM.render(
      <BrowserRouter>
       <Switch>
        <Route exact path="/" component={App} />
        <Route path="/home" component={App} />
        <Route path="/cart" component={Cart} />
        <Route path="/about" component={about} />
        <Route path="/mobiles" component={Mobiles} />
        <Route path="/groccery" component={Groccery} />
        <Route path="/clothes" component={Clothes} />

      </Switch>
      </BrowserRouter>,
      rootElement
    );
// If you want to start measuring performance in your app, pass a function
// to log results (for example: reportWebVitals(console.log))
// or send to an analytics endpoint. Learn more: https://bit.ly/CRA-vitals
reportWebVitals();
