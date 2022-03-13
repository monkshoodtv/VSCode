import logo from './logo.svg';
import './App.css';

function App() {
  const handleNameChgange = () => {
    const names = ['Fred', 'Sid', 'Harry'];
    const int = Math.floor(Math.random() * 3);
    return names[int];
  }
  return (
    <div className="App">
      <header className="App-header">
        <img src={logo} className="App-logo" alt="logo" />
        <p>
          Hello {handleNameChgange()}!
        </p>
      </header>
    </div>
  );
}
export default App;
