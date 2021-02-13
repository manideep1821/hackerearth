#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int x;
	cin>>x;
	for(int i=0;i<n;i++)
	{
		int a;
		cin>>a;
		if(a>=x)
		{
			cout<<"YES"<<endl;
		}
		else
		{
			cout<<"NO"<<endl;
		}
	}
}
