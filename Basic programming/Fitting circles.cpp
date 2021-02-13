#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	for(int i=0;i<t;i++)
	{
		int a,b;
		int r;
		cin>>a>>b;
		if(a>b)
		{
			 r=a/b;
		}
		else
		{
			 r=b/a;
		}
		cout<<r<<endl;

	}
	return 0;
}
