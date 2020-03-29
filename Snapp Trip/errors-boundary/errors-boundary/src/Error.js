import React ,{PureComponent} from 'react'

export default class Form extends PureComponent{
    render(){
        return(
            <div>
                <button className='reloadBtn' style={{margin:10,borderRadius: 5}}
                        onClick={this.props.reloadBtnOnClick}>بارگذاری مجدد</button>
                <div className='error-msg'>!مشکلی پیش امده لطفا دوباره اقدام کنید</div>
            </div>
        )
    }
}
