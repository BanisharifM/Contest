import React, { PureComponent } from "react";
import "./App.css";
import Form from "./Form";
import ErrorBoundary from "./ErrorBoundary";
class App extends PureComponent {
  constructor(props) {
    super(props);
    this.state = {
      person: {
        year: ""
      },
      error: ""
    };
  }
  resetHandler = () => {
    let person = { year: "" };
    let error = "";
    this.setState({ person, error });
  };
  changeHandler = e => {
    let person = { year: e.target.value };
    this.setState({ person });
  };
  setErrordd(err) {
    let stateRecent = this.state;
    stateRecent.error = err;
    this.setState(stateRecent);
  }

  render() {
    if (this.state.error) {
      return <h1>Caught an error.</h1>;
    }
    return (
      <div className="App">
        <header className="App-header">
          <ErrorBoundary
            reset={this.resetHandler}
            saveErrordd={err => this.setErrordd(err)}
          >
            <Form
              person={this.state.person}
              handleChange={this.changeHandler}
            />
          </ErrorBoundary>
        </header>
      </div>
    );
  }
}

export default App;
