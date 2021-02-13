#include<iostream>
#include<string>
using namespace std;
int main()
{
	string s;
	cin>>s;
	int count=1;
	int a=s.length();
	for(int i=1;i<a;i++)
	{
		if(s[i]==s[i-1])
		{
			count=count+1;
		}
		else
		{
			count=1;
		}
		if(count==6)
		{
			break;
		}

	}
	if(count==6)
	{
       cout<<"Sorry, sorry!";
	}
	else
	{
       cout<<"Good luck!";
	}
	return 0;
}
