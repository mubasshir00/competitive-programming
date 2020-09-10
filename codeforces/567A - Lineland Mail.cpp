#include<bits/stdc++.h>
using namespace std ;

int main()
{
    int n ;
    cin>>n;
    long long arr[100000];
    for(long long i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n);
    cout<<abs((arr[0]-arr[1])) <<" "<<abs((arr[n-1])-arr[0])<<endl;
    int m =n;
    m--;
    m--;
    int i=1;
    while(m--)
    {
       cout<< min( abs(arr[i+1]-arr[i]) ,abs(  arr[i-1]-arr[i] ))<<" "<<max( abs(arr[0]-arr[i]) ,abs( arr[n-1]-arr[i] ) )<<endl;
        i++;
    }
    cout<<abs( arr[n-1]-arr[n-2] )<<" "<<abs( arr[n-1] -arr[0] )<<endl;
    return 0;
}
