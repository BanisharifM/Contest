#include <iostream>
using namespace std;
int main() 
{
	string s;
	cin>>s;
	int t=0;
	while(1)
	{
		if(s[t]!='0')
		break;
		t++;
	}
	if(t==s.length())
	cout<<0;
	else
	{
		for(int i=t;i<s.length();i++)
		cout<<s[i];
	}
	return 0;
}
