import {Link} from 'react-router-dom'
import NavigationLogo from '../assets/navigation_logo.png'
import '../styles/utilities.css'
import '../styles/navigation.css'

const Navigation = () => {
    return (
        <nav className="navigation">
            <div className="logo">
                <img src={NavigationLogo} alt="Logo" />
            </div>
            <div className="navlinks">
                <Link style={{textDecoration: 'none'}} to='/'>
                    <h4 >Dashboard</h4>
                </Link>
                <Link style={{textDecoration: 'none'}} to='/history'>
                    <h4 >History</h4>
                </Link>
                
            </div>
        </nav>
    )
}

export default Navigation
