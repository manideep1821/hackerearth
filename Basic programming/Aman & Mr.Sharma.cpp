#include<iostream>
using namespace std;
int main()
{
	int d;
	cin>>d;
	int count=0;
	for(int i=0;i<d;i++)
	{
		int r,x;
		cin>>r>>x;
		int k=100*x;
		int m=(2*22*r)/7;
		if(k>=m)
		{
			count=count+1;
		}

	}
	cout<<count;
	return 0;
}

