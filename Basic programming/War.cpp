#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	for(int i=0;i<t;i++)
	{
		long long int n;
		cin>>n;
		long long int a[n],b[n];
		for(int j=0;j<n;j++)
		{
			cin>>a[j];
		}
		for(int j=0;j<n;j++)
		{
			cin>>b[j];
		}
		long long int k=a[0],l=b[0];

		for(int j=0;j<n;j++)
		{
			if(k<a[j])
			{
				k=a[j];
			}
			if(l<b[j])
			{
				l=b[j];
			}
		}
		if(k==l)
		{
			cout<<"Tie"<<endl;
		}
		else if(k>l)
		{
			cout<<"Bob"<<endl;
		}
		else
		{
			cout<<"Alice"<<endl;
		}

	}

	return 0;
}
