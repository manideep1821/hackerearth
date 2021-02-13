#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	for(int i=0;i<t;i++)
	{
       int a,k,n;
	   cin>>a>>k>>n;
	   int sum=a+k*(n-1);
	   cout<<sum<<endl;
	}

	return 0;
}
