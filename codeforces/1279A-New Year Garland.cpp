#include<bits/stdc++.h>
using namespace std ;
int main()
{
    int tc ;
    cin>>tc;
    while(tc--)
    {
        long long arr[5];
        for(long long i=0;i<3;i++)
        {
            cin>>arr[i];
        }
        sort(arr,arr+3);
        long long x = arr[2] - arr[1];
        long long y = x-arr[0];

        if(y<=1)
        {
            cout<<"Yes"<<endl;
        }
        else cout<<"No"<<endl;
    }

    return 0;
}
