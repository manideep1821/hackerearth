#include<iostream>
using namespace std;
int main()
{
	string s;
	cin>>s;
	int a=s.length();
	int sum=0;
	for(int i=0;i<a;i++)
	{
       sum=sum+int(s[i]-96);
	}
	cout<<sum;

	return 0;
}
