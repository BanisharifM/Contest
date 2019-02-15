#include <iostream>
using namespace std;
int main() 
{
	int x1,x2,x3,min,a[100],b[100],i=0,c[100];
	while(true)
	{
		cin>>a[i]>>b[i];
		if(a[i]==0&&b[i]==0)
		{
			c[i]=0;
			break;
		}
		x1=30*a[i]+40*b[i];
		x2=35*a[i]+30*b[i];
		x3=40*a[i]+20*b[i];
		min=x1;
		if(x2<min) min=x2;
		if(x3<min) min=x3;
		c[i]=min;
		i++;
	}
	for(int j=0;j<i;j++)
	{
		if(c[j]!=0) cout<<c[j]<<endl;
		else break;
	}
	return 0;
}
