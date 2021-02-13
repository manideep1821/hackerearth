#include <iostream>
#include<cstring>
#include<string>
using namespace std;
int main()
 {
    char s[200];
    cin>>s;
    int x=0;
    int y=0;
    int finalx = 0;
    int finaly = 0;
    for(int i=0; i<strlen(s); i++)
    {
         if(s[i] == 'L')
         {
            finalx += x-1;
         }
        else if(s[i] == 'R')
        {
            finalx += x+1;
        }
        else if(s[i] == 'U')
        {
            finaly += y+1;
        }
        else if(s[i] == 'D')
		{
            finaly += y-1;
        }

    }

    cout<<finalx<<" "<<finaly<<endl;

    return 0;
}
