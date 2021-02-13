#include<iostream>
using namespace std;
int main()
{
	string s;
	cin>>s;
	int i=0;
	while(s[i]!='\0')
	{
		if(s[i]>=65&&s[i]<=90)
		{
			s[i]=s[i]+32;

		}

	else if(s[i]>=97&&s[i]<=122)
		{
			s[i]=s[i]-32;

		}
		i++;

	}
	cout<<s;


}
