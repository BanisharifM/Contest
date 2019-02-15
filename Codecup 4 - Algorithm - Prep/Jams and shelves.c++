#include<iostream>
using namespace std;
int main()
{
    int n;
    int a[1000];
    int b[1000];
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int sum=1;
         cin>>a[i]>>b[i];
    }

    if(n==1)
    {
        cout << 2 << endl;
    }

    if(n==2)
    {
        cout << 4 << endl;
    }
    else
    {
        cout << 3*n-2 << endl;
    }
}
