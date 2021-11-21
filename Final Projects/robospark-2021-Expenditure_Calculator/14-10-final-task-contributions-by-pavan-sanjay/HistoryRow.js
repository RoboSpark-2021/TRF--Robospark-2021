import '../styles/table.css'
//this function is to input  data for display in each row  
const HistoryRow = () => {
    return (
        <div className="row">
                <div className="number">
                    <h4>1</h4>
                </div>
                <div className="name">
                    <h4>Note</h4>
                </div>
                <div className="price">
                    <h4>180</h4>
                </div>
                <div className="amount">
                    <h4>2</h4>
                </div>
                <div className="total">
                    <h4>360</h4>
                </div>
                <div className="actions">
                    <h4>

                    12-01-2021
                    </h4>
                </div>
        </div>
    )
}

export default HistoryRow
