#include<stdio.h>
int main()
{
    long long int n,arr[1000],i,j,ans=1,mod=1000000007;
    scanf("%ld",&n);
    for(i=0;i<n;i++)
     {
       scanf("%ld",&arr[i]);
       ans=((ans*arr[i])%mod);
     }
         printf("%ld",ans);

   return 0;

}
