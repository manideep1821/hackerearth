#include<iostream>
using namespace std;
int main()
{
    int t,n;
    cin>>t;
    int a=0,b=0,c=0;
// this program is without using arrays you can do with using arrays also
    for(int i=0;i<t;i++)
    {
        cin>>n;
        if(n%3==1)
        {
            a=a+n;
        }
       else if(n%3==2)
        {
            b=b+n;
        }
        else
        {
            c=c+n;
        }
    }
    cout<<a<<" "<<b<<" "<<c;


    return 0;
}
