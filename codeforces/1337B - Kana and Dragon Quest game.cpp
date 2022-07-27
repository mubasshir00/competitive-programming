#include<bits/stdc++.h>
using namespace std ;
int main(){
  int tc;
  cin>>tc;
  while (tc--)
  {
    int x,n,m;
    cin>>x>>n>>m;
    while(x>20 && n--){
      x = round(x/2)+10;
    }
    while( m--){
      x = x-10;
    }
    // cout<<x<<endl;
    if(x<=0){
      cout<<"YES"<<endl;
    } else {
      cout<<"NO"<<endl;
    }
    x=0;
  }
  
  return 0 ;
}
