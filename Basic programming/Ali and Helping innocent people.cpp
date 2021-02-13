#include<iostream>
using namespace std;
int main()
{
	string s;
	cin>>s;
	int count=0;
	  if(((s[0]-48)+(s[1]-48))%2==0)
	  {
        if(s[2]!='A'&&s[2]!='E'&&s[2]!='I'&&s[2]!='O'&&s[2]!='U'&&s[2]!='Y')
        {
            if(((s[3]-48)+(s[4]-48))%2==0)
			{
                if(((s[4]-48)+(s[5]-48))%2==0)
				{
                    if(((s[7]-48)+(s[8]-48))%2==0)
					{
                    cout<<"valid";
                    count=1;
                    }
                }
              }
            }
        }
    if(count==0)
	{
		cout<<"invalid";
	}
	return 0;
}
