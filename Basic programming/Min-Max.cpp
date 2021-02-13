#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int arr[n];
	int flag=0;
	for(int i=0;i<n;i++)
	{
       cin>>arr[i];
	}
	int min=arr[0];
	int max=arr[0];
	for(int i=0;i<n;i++)
	{
		if(min>arr[i])
		{
			min=arr[i];
		}
		if(max<arr[i])
		{
			max=arr[i];
		}
	}
	for(int i=min;i<max;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(arr[j]==i)
			{
				flag++;
				break;
			}
		}
	}
	int k=max-min;
	if(flag==k)
	{
		cout<<"YES";
	}
	else
	{
		cout<<"NO";
	}
	return 0;

}
