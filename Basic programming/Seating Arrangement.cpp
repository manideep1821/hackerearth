#include <iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0; i<t; i++)
    {
        int n;
        cin>>n;
        int m=(n%6),fsn;

        //for getting facing seat numbers

        if(n%12>=1 && n%12<=6)
        {
            if(m==0)
                fsn = n+1;
            else
                fsn = n+13-2*m;
        }
        else
        {
            if(m==0)
                fsn = n-11;
            else
                fsn = n-2*m+1;
        }

        //for getting seat type

        if(n%6==0 || (n-1)%6==0)
            cout<<fsn<<" WS\n";
        else if((n+1)%3==0)
            cout<<fsn<<" MS\n";
        else
            cout<<fsn<<" AS\n";
    }

    return 0;
}
