#include<iostream>
using namespace std;
int main()
{
	string s;
	cin>>s;
	char b;
	string temp=s;
	int n=s.length()-1;
	int i=0;
	while(i<n)
	{
      b=s[i];
	  s[i]=s[n];
	  s[n]=b;
	  i++;
	  n--;

	}
  if(s==temp)
  {
	  cout<<"YES";
  }
  else
  {
	  cout<<"NO";
  }
}
