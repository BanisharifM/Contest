#include<iostream>
using namespace std;
int main()
{
    int k,n;
    int a[100];
    cin>>n>>k;
    int sum=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        sum+=a[i];
    }
    int m = sum/k;
    if(m*k<sum)
        cout << n-m-1 << endl;
    else
        cout << n-m << endl;

}
