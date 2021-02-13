#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	for(int i=0;i<t;i++)
	{
		int a,b,c,d;
		cin>>a>>b>>c>>d;
		int e=(a*60)+b;
		int f=(c*60)+d;
		int g=f-e;
		int r=g/60;
		g=g%60;
		cout<<r<<" "<<g<<endl;
	}
}
