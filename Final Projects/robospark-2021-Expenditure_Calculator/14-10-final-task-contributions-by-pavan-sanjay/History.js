//importing packages
import '../styles/search.css'
import '../styles/table.css'
import HistoryTable from "./HistoryTable.js"
//this is the function which returns the textbox a.k.a the search box and the month drop down box 
// in line no 42 we are using the function HistoryTable from HistoryTable to display our table 
const History = () => {
    return (
        <div >
            <section className="sect2">
          <form className="infi">
            <input type="text"  placeholder="search" id="search"/>
            <select id="lm">
            <option value = "Month"> Month  
            </option>    
            <option value = "January"> January  
            </option>  
            <option value = "Febuary"> Febuary  
            </option>  
            <option value = "March">March
            </option>  
            <option value = "April"> April
            </option> 
            <option value = "May"> May
            </option>
            <option value = "June"> June
            </option>
            <option value = "July"> July
            </option>
            <option value = "August"> August
            </option>
            <option value = "September"> September
            </option>
            <option value = "October"> October
            </option>
            <option value = "November"> November
            </option>
            <option value = "December"> December
            </option>
            </select>  
          </form>
            </section>
            <HistoryTable />
        </div>
    )
}

export default History
