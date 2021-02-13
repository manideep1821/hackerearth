#include<iostream>
using namespace std;
int main()
{
	int max(int,int,int);
	int a,b,c;
	cin>>a>>b>>c;
	int z=max(a,b,c);
	cout<<z;
	return 0;
}
int max(int i,int j,int k)
{
     if(i>j&&i>k)
	 {
		 return i;
	 }
	 else if(j>i&&j>k)
	 {
		 return j;
	 }
	 else
	 {
		 return k;
	 }
}
