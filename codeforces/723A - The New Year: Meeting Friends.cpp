#include<bits/stdc++.h>
using namespace std ;
int main()
{
    int n ;
    int arr[5];
    n=3;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int sum =0;
    sort(arr,arr+n);
    for(int i=0;i<n-1;i++)
    {
        sum = sum+(arr[i+1]-arr[i]);
    }
    cout<<sum<<endl;
    return 0;
}
