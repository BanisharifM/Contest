#include <iostream>
#include<string.h>
using namespace std;
int f(char *a,int l);
int main()
{
    string s;
    int w=0;
    cin>>s;
    int l1=s.length();
    char x[l1];
    for(int i=0;i<l1;i++)
        x[i]=s[i];
    for(int i=1;i<=l1;i++)
    {
        for(int j=0;j<l1&&j+i<=l1;j++)
        {
            for(int q=j;q<j+i;q++)
            {
                x[q-j]=s[q];
            }
            if(f(x,i)==1)
                w++;
        }
    }
    cout<<w;
    return 0;
}
int f(char *a,int l)
{
    int t;
    for(int i=l-1;i>=0;i--)
    {
        for(int j=0;j<i;j++)
        {
            if(a[j]>a[j+1])
            {
                t=a[j];
                a[j]=a[j+1];
                a[j+1]=t;
            }
        }
    }
    int k=1,i=0;
    if(l==1)
        return 1;
    while(i<l-1)
    {
        if(a[i]==a[i+1])
        {
            k++;
            i++;
        }
        else
        {
            if(k>=l/2)
                return 1;
            else
            {
                k=1;
                i++;
            }
        }
    }
    return -1;
}
