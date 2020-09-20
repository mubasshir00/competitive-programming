#include<bits/stdc++.h>
using namespace std ;
int main()
{
    long long tc;
    cin>>tc;
    while(tc--){
        int n ;
        cin>>n;
        int arr[1000];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int sum =0;
        int f =0;
        for(int i=0;i<n;i++){
            sum = sum+arr[i];
            if(arr[i]==0){
                f++;
            }
        }
        if(f>0){
          if((sum+f)!=0){
            cout<<f<<endl;
          }
          else {
            cout<<f+1<<endl;
          }
        }
        else if(sum==0 and f==0){
            cout<<1<<endl;
        }
       else cout<<0<<endl;
    }
    return 0 ;
}
