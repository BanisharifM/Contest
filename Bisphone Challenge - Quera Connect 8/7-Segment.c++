#include <iostream>

using namespace std;

int main()
{
    int segment[]={6,2,5,5,4,5,6,3,7,6},unit=0,k=0,x=0;
    string s;
    int flag=0; //0:befor '.' 1:befor 'e'  2:after 'e'
    cin>>s;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='e')
        {
            flag=2;
            continue;
        }
        else if(s[i]=='.')
        {
            flag=1;
            continue;
        }
        if(flag==2)
        {
            x=(x*10)+s[i]-48;
        }
        else
        {
            unit+=segment[s[i]-48];
            if(flag==1)
                k++;
        }
    }
    unit+=(x-k)*6;
    cout<<unit;
    return 0;
}
