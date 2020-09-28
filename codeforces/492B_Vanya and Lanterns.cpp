#include<bits/stdc++.h>
using namespace std ;
int main()
{
    long long n,l;
    cin>>n>>l;
    int arr[10000];
    for(long long i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr,arr+n);
    int ans =0;
    for(long long i=0;i<n-1;i++){
        ans = max(ans,(arr[i+1]-arr[i]));
    }
    if(arr[0]>(ans/2.0) and arr[0]>l-arr[n-1]){
       // cout<<arr[0];
      // double = arr[0];
       cout<<arr[0]<<".0000000000"<<endl;
    }
    else if(l-arr[n-1]>(ans/2.0)){
        cout<<l-arr[n-1]<<".0000000000"<<endl;
    }
    else
    {
         printf("%.10f",ans/2.0);
       // cout<<(ans/2.0)<<endl;
    }
   // cout<<ans<<endl;
    return 0;
}
