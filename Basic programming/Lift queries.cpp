#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	int n=0,m=7;
	for(int i=0;i<t;i++)
	{
		int x;
		cin>>x;

		if(x-n<=m-x)
		{
			cout<<"A"<<endl;;
			n=x;
		}
		else
		{
			cout<<"B"<<endl;
			m=x;
		}
	}
}
