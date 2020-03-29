import React ,{PureComponent} from 'react'

export default class Form extends PureComponent{
    componentDidUpdate(prevProps, prevState, snapshot) {
        const {person} = this.props;
        if(!person || !person.year || isNaN(person.year))  {
            throw new Error('err');
        }
    }
    render(){
        return(
            <p>
                <label> سال تولد خود را وارد کنید</label>
                <input  style={{marginTop: 10}} className="w3-input" type="text"  value={this.props.person.year}
                       onChange={this.props.handleChange}/>
                {this.props.person.year ?
                    <span>
                        سال تولد شما: {this.props.person.year}
                    </span>
                    :null}
            </p>
        )
    }
}
