#include<bits/stdc++.h>
using namespace std ;
int main()
{
    int n,a,b;
    cin>>a>>b>>n;
    int i=0;
    while(n>0)
    {
        //i++;
        if(n>0){
        n=n-(__gcd(a,n));
       // cout<<"n "<<n<<endl;
        i++;
        }
        if(n>0){
        n=n-(__gcd(b,n));
       // cout<<"n "<<n<<endl;
        i++;
        }
    }
   if(i%2==0)cout<<"1"<<endl;
   else cout<<"0"<<endl;
    return 0;
}
