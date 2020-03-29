import React, { Component } from "react";
import Error from "./Error";
export default class ErrorBoundary extends Component {
  constructor(props) {
    super(props);
    this.state = { hasError: false };
  }
  componentDidCatch(error, errorInfo) {
    this.setState({ hasError: true });
    this.props.saveErrordd(error);
  }
  reset = () => {
    window.location.reload(false);
    this.setState({ hasError: false });
    this.props.reset();
  };
  render() {
    if (this.state.hasError) {
      return <Error reloadBtnOnClick={this.reset} />;
    }

    return this.props.children;
  }
}
