#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	for(int i=0;i<t;i++)
	{
       long int n;
	   cin>>n;
	   while(n!=1)
	   {
		   if(n%2==0)
		   {
			   n=n/2;
		   }
		   else
		   {
			   n=3*n+1;
		   }
	   }
	   if(n==1)
	   {
		   cout<<"YES"<<endl;
	   }
	   else
	   {
           cout<<"NO"<<endl;
	   }
	}
	return 0;
}
