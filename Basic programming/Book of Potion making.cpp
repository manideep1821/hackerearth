#include<iostream>
#include<string>
using namespace std;
int main()
{
	string s;
	cin>>s;
	int a=s.length();
	int sum=s[0];
	if(a==10)
	{
        for(int i=1;i<10;i++)
		{
			sum=sum+(i+1)*s[i];
		}

		if(sum%11==0)
		{
			cout<<"Legal ISBN";
		}
		else
		{
		   cout<<"Illegal ISBN";
		}
	}
	else
		{
		   cout<<"Illegal ISBN";
		}
	return 0;
}
