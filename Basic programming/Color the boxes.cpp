#include <bits/stdc++.h>
using namespace std;
int main()
{
	long long int n,m,w=1;
	long long int p=pow(10,9)+7;
	cin>>n>>m;
	while(m>0)
	{
		w=w*m%p;
		m--;    // or can use w=fmod((w*m),p)
	}
	cout<<w;
	return 0;
}
