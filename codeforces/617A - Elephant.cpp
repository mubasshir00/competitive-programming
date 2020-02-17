#include<bits/stdc++.h>
using namespace std ;
int main()
{

    long long int n =0 ;
    cin>>n;
   long long  int ans = (n/5);
   long long  int a1 = (n-(ans*5));
   if(a1==0)cout<<ans<<endl;
   else cout<<ans+1<<endl;


    return 0 ;
}
