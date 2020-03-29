import React from 'react'
import App from "../App";
import TestRenderer from 'react-test-renderer';

describe('Tests', () => {
    const testRenderer = TestRenderer.create(<App />);
    const testInstance = testRenderer.root;
    const instance = testRenderer.getInstance();
    const input = testInstance.findByProps({className: "w3-input"});

    it('test_input_onchange_with_number_as_a_value', function () {
        const value1 = 20;
        input.props.onChange({
            target:{
                value: value1
            }
        });
        expect(instance.state.person.year).toBe(value1);
    });
});

