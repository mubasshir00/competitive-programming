#include<bits/stdc++.h>
using namespace std ;
int main()
{
    int n ,m;
    cin>>n>>m;
    int arr[10000];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
 
   int sum=0;
   for(int i=0;i<n-1;i++){
    sum=sum+(arr[i]+10);
   }
   sum=sum+arr[n-1];
   if(sum <= m){
    if(sum==m){
        cout<<(n-1)*2<<endl;
    }
    else {
            if((m-sum)>=5){
                cout<<((n-1)*2)+((m-sum)/5)<<endl;
            }
            else{
                 cout<<(n-1)*2<<endl;
            }
 
    }
   }
   else cout<<"-1"<<endl;
    return 0;
}
