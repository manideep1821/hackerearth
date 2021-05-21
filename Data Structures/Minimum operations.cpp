#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
	ll n,count=0;;
    cin>>n;
    ll arr[n],freq[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        freq[i]=-1;
    }
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]==arr[j])
                freq[j]=0;
            else
                break;
        }
    }
    for(int i=0;i<n;i++)
    {
        if(freq[i]!=0)
            count++;
    }
    cout<<count;
	return 0;
}
