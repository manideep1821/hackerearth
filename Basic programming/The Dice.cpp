#include<iostream>
using namespace std;
int main()
{
	string s;
	cin>>s;
	int a=s.length();
	int count=0;
	for(int i=0;i<a;i++)
	{
		if(s[i]=='6')
		{
            continue;
		}
		if(s[i]!='6')
		{
			count=count+1;
		}
	}
	if(s[a-1]=='6')
	{
		cout<<"-1";
	}
	else
	{
		cout<<count;
	}
	return 0;
}
