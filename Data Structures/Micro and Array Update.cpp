#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	for(int i=0;i<t;i++)
	{
		long long int n,k;
		cin>>n>>k;
		long long int count=0,arr[n];
		for(int j=0;j<n;j++)
		{
			cin>>arr[j];
		}
		long long int small=arr[0];
		for(int j=1;j<n;j++)
		{
			if(arr[j]<small)
			{
				small=arr[j];
			}
		}
		if(small<k)
		{
			cout<<k-small<<endl;
		}
		else
		{
			cout<<"0"<<endl;
		}

	}

	return 0;
}
