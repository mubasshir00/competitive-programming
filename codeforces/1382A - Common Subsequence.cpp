#include<bits/stdc++.h>
using namespace std ;
int main()
{
    long long tc;
    cin>>tc;
    while(tc--){
    long long n ,m;
    cin>>n>>m;
    int arr1[1006];
    int arr2[1007];
    for(int i=0;i<n;i++){
        cin>>arr1[i];
    }
    for(int i=0;i<m;i++)
    {
        cin>>arr2[i];
    }
    int count =0;
    int x =0;
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
    {
        if(arr1[i]==arr2[j]){
            count =1;
            x=arr1[i];
            break;
        }
    }
    if(count==1){
            cout<<"YES"<<endl;
    cout<<count<<" "<<x<<endl;
    }
    else cout<<"NO"<<endl;
    }
    return 0 ;
}
