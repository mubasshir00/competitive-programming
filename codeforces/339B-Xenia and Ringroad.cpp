#include<bits/stdc++.h>
using namespace std ;
int main()
{
    long long n,m;
    cin>>n>>m;
    long long arr[100000];
    for(int i=0;i<m;i++)
    {
        cin>>arr[i];
    }
    long long a,b,c,d;
    long long sum =arr[0];
    for(int i=1;i<m;i++)
    {
        if(arr[i-1]>arr[i])
        {
            sum = sum + ((n-arr[i-1])+arr[i]);
        }
        if(arr[i-1]<=arr[i])
        {
            sum = sum + (arr[i] - arr[i-1]);
        }
    }
    cout<<sum-1<<endl;
    return 0 ;
}
