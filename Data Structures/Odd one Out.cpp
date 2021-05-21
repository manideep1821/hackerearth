#include<iostream>
using namespace std;
int main()
{
     ios::sync_with_stdio(0);
     cin.tie(0);
    long long int n,num,sum=0;
    cin>>n;
    for(long long int i=1; i<n; ++i)
    {
        cin>>num;
        sum+=num;
    }
    cout<<n*n-sum<<endl;
	return 0;
}
