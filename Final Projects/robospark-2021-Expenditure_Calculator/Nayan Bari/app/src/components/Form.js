import '../styles/form.css'
import { useState, useEffect } from 'react'

const Form = () => {
    const [number, setNumber] = useState(0)
    const [expenses, setExpenses] = useState({});
    const [item, setItem] = useState(['']);
    
    const addItem = () => {
        let value = number
        const form = document.querySelector('.form');
        const name = form.querySelector('.form .form-name #item').value;
        const price = form.querySelector('.form .form-name #price').value;
        const amount = form.querySelector('.form .form-name #amount').value;
        const status = new Date();
        const time = `${status.getHours()}:${status.getMinutes()}` ;
        const date = `${status.getDate()}-${status.getMonth() + 1}-${status.getFullYear()}` ;
        console.log(number)
        if(status.getHours() == 24){
            setNumber(0)
        }
        setItem([name, price, amount, time, date])
        setExpenses({...expenses, [status.getFullYear()]: { [status.getMonth() + 1]: {[status.getDate()]: {[value]: { item: name, price: price, amount: amount, time: time, date: date}}}}})
        setNumber(++value)
    }
    console.log(item);
    console.log(expenses);
    return (
        <div className="additem">
            <h4>add item</h4>
        <div className="form">
            <div className="form-name">
              <input type="text" name="item" id="item" autoComplete="off" required />
              <label className="label-name">
                <span className="content-name">
                  <h5>Item Name</h5>
                </span>
              </label>
            </div>
            <div className="form-name">
              <input type="number" name="price" id="price" autoComplete="off" required />
              <label className="label-name">
                <span className="content-name">
                  <h5>Price</h5>
                </span>
              </label>
            </div>
            <div className="form-name">
              <input type="number" name="amount" id="amount" autoComplete="off" required />
              <label className="label-name">
                <span className="content-name">
                  <h5>Amount</h5>
                </span>
              </label>
            </div>
          </div>
          <div className="submitButton">
            <input className="btn" type='submit' onClick = {addItem} value="Add" />
          </div>
        </div>
    )
}

export default Form


