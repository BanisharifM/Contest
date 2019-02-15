#include <iostream>

using namespace std;

int main()
{
    int k;
    string s1,s2,s3;
    cin>>s1>>s2>>s3;
    k=s1.length()/5;
    for(int i=0;i<k;i++)
    {
        if(s1[i*5]=='o')
            cout<<"A";
        if(s1[i*5]=='*'&&s1[i*5+1]=='*'&&s1[i*5+2]=='*')
            cout<<"T";
        if(s1[i*5]=='*'&&s1[i*5+1]=='*'&&s1[i*5+2]!='*')
            cout<<"M";

        if(s1[i*5]=='*'&&s1[i*5+1]=='o')
        {
             if(s2[i*5]=='o')
                cout<<"X";
             else
                cout<<"N";
        }
    }
    return 0;
}
