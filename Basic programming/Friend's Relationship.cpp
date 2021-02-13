#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	for(int i=0;i<t;i++)
	{
		int n;
		cin>>n;
		for(int j=1;j<=n;j++)
		{
			for(int k=1;k<=j;k++)
			{
				cout<<"*";
			}
			for(int k=1;k<=(n-j)*2;k++)
			{
				cout<<"#";
			}
			for(int k=1;k<=j;k++)
			{
				cout<<"*";
			}
			cout<<endl;
		}
		cout<<endl<<endl;
	}
}
