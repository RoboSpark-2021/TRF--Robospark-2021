import '../styles/table.css'                             // Imported CSS file of the Table
const Row = (data) => { 
    const deleteRow = (e) => {                           // To delete the Row
        const row = e.nativeEvent.path[4]
        row.style.display = 'none'
    }
    return (
        <div className="row">
                <div className="number">                
                    <h4>1</h4>                           {/*// Input of the Serial no. */}
                </div>
                <div className="name">
                     <h4>Note</h4>                       {/*// Input of the Item Name  */}
                </div>
                <div className="price">
                     <h4>180</h4>                        {/*//  Input of the Price */}
                </div>
                <div className="amount">
                     <h4>2</h4>                          {/*// Input of the Quantity */}
                </div>
                <div className="total">
                    <h4>360</h4>                         {/* // Output(Total Cost) - Price*Quantity */}
                </div>
                <div className="actions">
                    <div className ="icon"onClick={deleteRow}>   
                    {/* // Adding Image of the delete Button */}            
                    <svg xmlns="http://www.w3.org/2000/svg" width="24" height="24" viewBox="0 0 24 24"><path d="M3 6v18h18v-18h-18zm5 14c0 .552-.448 1-1 1s-1-.448-1-1v-10c0-.552.448-1 1-1s1 .448 1 1v10zm5 0c0 .552-.448 1-1 1s-1-.448-1-1v-10c0-.552.448-1 1-1s1 .448 1 1v10zm5 0c0 .552-.448 1-1 1s-1-.448-1-1v-10c0-.552.448-1 1-1s1 .448 1 1v10zm4-18v2h-20v-2h5.711c.9 0 1.631-1.099 1.631-2h5.315c0 .901.73 2 1.631 2h5.712z" fill="#FF0000"/></svg>
                    </div>
                    <div className="icon">
                    {/* // Adding Image of the Edit Button */}
                    <svg xmlns="http://www.w3.org/2000/svg" width="24" height="24" viewBox="0 0 24 24"><path d="M7.127 22.564l-7.126 1.436 1.438-7.125 5.688 5.689zm-4.274-7.104l5.688 5.689 15.46-15.46-5.689-5.689-15.459 15.46z"/></svg>
                    </div>
                </div>
            </div>
    )
}

export default Row         
