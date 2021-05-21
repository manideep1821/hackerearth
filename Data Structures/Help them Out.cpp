#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0; i < n; i++)
	{
        cin>>arr[i];
    }
    int count = 0;
    for(int i = 0; i < n; i++)
	{
        while(arr[i] != 0)
		{
            for(int j = 0; j < n; j++)
			{
                if(arr[j] % 2 != 0)
				{
                    arr[j] = arr[j] - 1;
                    count++;
                }
            }
            for(int k = 0; k<n; k++)
			{
                if(arr[k] % 2 == 0){
                    arr[k] = arr[k] / 2;
                }
            }
            count++;
        }
    }
    cout<<count - 1;
    return 0;
}
