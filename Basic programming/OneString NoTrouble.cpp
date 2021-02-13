#include<iostream>
using namespace std;
int main()
{
	string s;
	cin>>s;
	int count=0;
	int check=0;
	int a=s.length();
	for(int i=0;i<a-1;i++)
	{
        if(s[i+1]==s[i])
		{
			if(count+1>check)
			{
				check=count+1;

			}
			count=0;
		}
		else
		{
			count++;
		}
	}

	if(count+1>check)
	{
		cout<<count+1;
	}
	else
	{
       cout<<check;
	}
	return 0;
}
