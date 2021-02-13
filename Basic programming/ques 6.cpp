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
			for(int k=1;k<=n-j;k++)
			{
				cout<<" ";
			}
			for(int k=1;k<=2*j-1;k++)
			{
				cout<<"*";
			}
			cout<<endl;
		}
		cout<<endl;
	}
	return 0;
}
