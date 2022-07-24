#include<bits/stdc++.h>
using namespace std ;
int main(){
  int tc ;
  cin>>tc;
  while(tc--){
    int x ;
    cin>>x;
    int arr[4];
    cin>>arr[1]>>arr[2]>>arr[3];
    if(arr[x]==0 || arr[arr[x]]==0|| arr[x]==arr[arr[x]]){
      cout<<"NO"<<endl;
    } else {
      cout<<"YES"<<endl;
    }
  }
  return 0;
}
