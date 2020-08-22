#include<bits/stdc++.h>
using namespace std ;
int main()
{
    unsigned long long tc;
    cin>>tc;
    while(tc--)
    {
         unsigned long long a[10];
         unsigned long long n=0 ;
         cin>>a[0]>>a[1]>>a[2]>>n;
         sort(a,a+3);
         unsigned long long temp = (a[2]-a[0])+(a[2]-a[1]);
         //cout<<n-temp<<endl;
         if((n-temp)%3==0 and (n-temp)<=n){
            cout<<"YES"<<endl;
         }
         else cout<<"NO"<<endl;
    }
    return 0;
}
