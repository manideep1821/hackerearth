#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	for(int i=0;i<t;i++)
	{
		int n,m;
		cin>>n>>m;
		int arr[n];
		int temp;
		int max=0,min=0;
		for(int j=0;j<n;j++)
		{
            cin>>arr[j];
		}
		for(int j=0;j<n;j++)
		{
			for(int k=0;k<n-j-1;k++)
			{
				if(arr[k+1]<arr[k])
				{
                    temp=arr[k];
					arr[k]=arr[k+1];
					arr[k+1]=temp;
				}
			}
		}
		for(int j=m;j<n;j++)
		{
			max=max+arr[j];
		}

		for(int j=0;j<n-m;j++)
		{
			min=min+arr[j];
		}
		cout<<max-min<<endl;

	}
	return 0;
}
