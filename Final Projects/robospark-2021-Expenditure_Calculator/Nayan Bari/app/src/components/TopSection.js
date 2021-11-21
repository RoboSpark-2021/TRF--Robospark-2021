import '../styles/utilities.css'
import '../styles/topSection.css'
import { useState } from 'react'
import Form from './Form'
const TopSection = () => {
    const [todaysTotal, setTodaysTotal] = useState('1460.00')
    return (
        <div className="top-section">
            <div className='card'>
                <h4>today's total</h4>
                <h2>Rs. {todaysTotal}</h2>
            </div>
            <Form />
        </div>
    )
}

export default TopSection
