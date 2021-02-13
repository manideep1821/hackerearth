#include<iostream>
using namespace std;
int main()
{
	int n,q;
	cin>>n>>q;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	int k=0;
	while(k<q)
	{
		int sum=0;
		int a,b,c;
		cin>>a>>b>>c;
		if(a==1)
		{
			arr[b]=c;
		}
		else if(a==2)
		{
          for(int j=b;j<=c;j++)
		  {
			  sum=sum+arr[j];
		  }
		  cout<<sum<<endl;
		}

		k++;
	}

}
