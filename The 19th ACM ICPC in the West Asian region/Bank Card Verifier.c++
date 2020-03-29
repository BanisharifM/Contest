#include <iostream>
#include<vector>
using namespace std;
int main()
{
	string s1;
	int sum,p=0,t=0,s,x;
	vector <int>a;
	while(p!=16)
	{
		sum=0;
		p=0;
		for(int j=0;j<4;j++)
		{
			cin>>s1;
			for(int i=0;i<4;i++)
			{
				if(s1[i]-48==0) p++;

			if(i==0||i==2)
			{
				s=(s1[i]-48)*2;
				if(s>9) s=9;
				sum+=s;
			}
			else sum+=s1[i]-48;
	    	}
		}
		if(sum%10==0) x=1;
		else x=0;
		a.push_back(x);
	}
	for(int i=0;i<a.size()-1;i++)
	{
		if(a[i]==1) cout<<"Yes"<<endl;
		else cout<<"No"<<endl;
	}

	return 0;
}
