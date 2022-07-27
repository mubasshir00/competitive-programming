#include<bits/stdc++.h>
using namespace std ;
int main(){
  int n ;
  cin>>n;
  while(n--){
    string S;
    cin>>S;
    transform(S.begin(),S.end(),S.begin(),::tolower);
    if(S=="yes"){
      cout<<"YES"<<endl;
    } else {
      cout<<"NO"<<endl;
    }
  }
  return 0 ;
}
