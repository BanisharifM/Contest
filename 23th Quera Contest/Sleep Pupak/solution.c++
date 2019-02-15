#include <iostream>
using namespace std;
int main() 
{
	int a,b,x,k=0;
	cin>>a>>b>>x;
	for(int i=a;i>=1;i--)
	{
		for(int j=b;j>=1;j--)
		{
			if(a%i==0&&b%j==0&&i+j<=x)
			k++;
		}
	}
	cout<<k;
	return 0;
}
