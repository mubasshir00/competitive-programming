#include<bits/stdc++.h>
using namespace std ;
int main()
{
 long long int n ;
 int k ;
 cin>>n>>k;
 while(1){
 //cout<<k<<endl;
  if(k<=0){
   break;
  }
  if(n%10!=0){
   k--;
   n--;
  }
  else if(n%10==0){
   n = n/10;
   k--;
  }
  //cout<<n<<endl;
 }
 cout<<n<<endl;
 return 0;
}
