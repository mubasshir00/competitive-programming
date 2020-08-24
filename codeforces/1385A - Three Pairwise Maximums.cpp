#include<bits/stdc++.h>
using namespace std ;
int main()
{
    long long n;
    cin>>n;
    while(n--)
    {
       int a,b,c;
       cin>>a>>b>>c;
       int d= max(a,max(b,c));
       if((a==d and d==c) ||(a==d and d==b) || (b==d and c==d))
       {
           cout<<"YES"<<endl;
           cout<<d<<" "<<(min(a,min(b,c)))<<" "<<1<<endl;
       }
       else cout<<"NO"<<endl;
    }
    return 0 ;
}
