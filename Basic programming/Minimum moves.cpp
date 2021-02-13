#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	for(int i=0;i<t;i++)
	{
		int x,y;
		int k=0,l=0;
		cin>>x>>y;
		int moves=0;
		while(l<y)
		{
			l++;
			moves++;
			k++;
		}
		while(k<x)
		{
			k++;
			moves++;
		}
		if(l==y&&k==x)
		{
           cout<<moves<<endl;
		}
		else
		{
			cout<<"-1"<<endl;
		}

	}
	return 0;
}
