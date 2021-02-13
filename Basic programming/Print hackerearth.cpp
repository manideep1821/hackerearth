#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int n,h,a,c,k,e,r,t;
    string s;
    int m;
    cin>>n>>s;
    h=count(s.begin(),s.end(),'h');
    a=count(s.begin(),s.end(),'a');
    c=count(s.begin(),s.end(),'c');
    k=count(s.begin(),s.end(),'k');
    e=count(s.begin(),s.end(),'e');
    r=count(s.begin(),s.end(),'r');
    t=count(s.begin(),s.end(),'t');
    h=h/2;
    e=e/2;
    a=a/2;
    r=r/2;
    m=min(min(min(h,a),t),min(min(c,k),min(e,r)));
    cout<<m;

    return 0;

}
