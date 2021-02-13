#include <iostream>
using namespace std;
int main()
 {

    long long int n;

    cin>>n;

    long long int oc,of,od;

    cin>>oc>>of>>od;

    long long int cs,cb,cm,cd;

    cin>>cs>>cb>>cm>>cd;

    long long int osum,csum;

    osum=oc+(n-of)*od;

    csum=cb+(n/cs)*cm+(n*cd);

    if(osum<=csum)
    {
        cout<<"Online Taxi";
    }



    else
    {
        cout<<"Classic Taxi";
    }

 }

