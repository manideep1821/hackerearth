#include<iostream>
using namespace std;
int main()
{
    int n;
    int test=1;
    while(test>0)
    {
        cin>>n;
        if(n!=42)
        {
            cout<<n<<endl;
        }
        else
        {
            test=0;
        }
    }
    return 0;
}
