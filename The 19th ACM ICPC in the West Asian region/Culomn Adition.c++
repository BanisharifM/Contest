#include<iostream>
using namespace std;

int f(string s[],int n,int m,int c)
{
    int m1,m2;
    if(n==0)
    {
        return m;
    }
    else
    {

        if((c+s[0][n-1]+s[1][n-1]-96)%10!=s[2][n-1]-48)
        {
            return  f(s,n-1,m+1,c);
        }
        else
        {
            if(c+s[0][n-1]+s[1][n-1]-96>9)
            {
                c=1;

                m1=f(s,n-1,m,1);
                m2=f(s,n-1,m+1,0);

                if(m1>m2)
                {
                    return m2;
                }
                else
                {
                    return m1;
                }
            }
            else
            {
                return f(s,n-1,m,0);
            }
        }
    }
}


int main()
{
    string s[3];
    int n;
    while(true)
    {
        cin>>n;
        if(n==0)
        {
            break;
        }
        cin>>s[0]>>s[1]>>s[2];
        cout<<f(s,n,0,0)<<endl;
    }
}
