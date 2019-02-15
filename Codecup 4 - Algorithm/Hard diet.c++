#include<iostream>
#define MAXN 1000
using namespace std;
int main()
{
    string s;
    cin>>s;
    int g = 0;
    int r = 0;
    int y = 0;
    for(int i=0;i<5;i++)
    {
        if(s[i]=='R')
            r++;
        else if(s[i]=='G')
            g++;
        else if(s[i]=='Y')
            y++;
    }
    if(r>=3||(r>=2&&y>=2)||g==0)
        cout << "nakhor lite" << endl;
    else
     cout << "rahat baash" << endl;


}
