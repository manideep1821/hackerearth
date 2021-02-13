#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int sum=0;
	int r;
	int i=5;
	while(n>0)
	{
		r=n/i;
		n=n%i;
		sum=sum+r;
		i--;
	}
	cout<<sum;
  return 0;
}
