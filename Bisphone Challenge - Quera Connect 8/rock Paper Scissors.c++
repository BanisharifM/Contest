#include <iostream>

using namespace std;

int main()
{
    long long int p,r,s,a,b,c,score=0;
    cin>>p>>r>>s>>a>>b>>c;
    if(p<=c)
    {
        score+=p;
        c-=p;
        p=0;
    }
    else
    {
        score+=c;
        p-=c;
        c=0;
    }
    if(r<=a)
    {
        score+=r;
        a-=r;
        r=0;
    }
    else
    {
        score+=a;
        r-=a;
        a=0;
    }
    if(s<=b)
    {
        score+=s;
        b-=s;
        s=0;
    }
    else
    {
        score+=b;
        s-=b;
        b=0;
    }
    if(p<=a)
    {
        a-=p;
        p=0;
    }
    else
    {
        p-=a;
        a=0;
    }
    if(r<=b)
    {
        b-=r;
        r=0;
    }
    else
    {
        r-=b;
        b=0;
    }
    if(s<=c)
    {
        c-=s;
        s=0;
    }
    else
    {
        s-=c;
        c=0;
    }
    score-=(p+r+s);
    cout<<score;
    return 0;
}
