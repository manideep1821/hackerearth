#include<iostream>
using namespace std;
int main()
{
	int a,b;
	cin>>a>>b;
	if((a<=23)&&(b>500||b<1000))
	{
		cout<<"Take Medicine";
	}
	else
	{
		cout<<"Don't take Medicine";
	}

	return 0;
}
