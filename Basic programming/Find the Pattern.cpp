#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
   long int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	long int min=arr[0];
	long int max=arr[0];
	for(int i=0;i<n;i++)
	{
		if(arr[i]>max)
		{
			max=arr[i];
		}
		if(arr[i]<min)
		{
			min=arr[i];
		}
	}
	long int sum=max+min;
	cout<<sum;

	return 0;
}
