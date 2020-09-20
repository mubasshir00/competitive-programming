#include<bits/stdc++.h>
using namespace std ;
int main()
{
    int tc;
    cin>>tc;
    while(tc--){
        int n ;
        cin>>n;
        int arr[10000];
        int arr2[10000];
        for(int i=0;i<n;i++){
            cin>>arr[i];
           // arr2[i] = arr[i];
        }
        reverse(arr,arr+n);
        for(int i=0;i<n;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
    return 0 ;
}
