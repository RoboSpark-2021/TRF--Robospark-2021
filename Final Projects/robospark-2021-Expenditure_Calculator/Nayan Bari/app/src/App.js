import Navigation from './components/Navigation';
import {BrowserRouter as Router, Switch, Route} from 'react-router-dom'
import TopSection from './components/TopSection';


function App() {
  return (
    <Router>
    <div className="App">
      <Navigation />
      <TopSection />
    </div>
    </Router>
  );
}

export default App;
