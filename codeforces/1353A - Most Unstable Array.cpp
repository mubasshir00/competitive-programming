#include<bits/stdc++.h>
using namespace std ;
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        long long int n,m;
        cin>>n>>m;
        long long int a = (m-(m%2))/2;
        long long int b = m-a ;
       // cout<<a<<" "<<b<<endl;
        //if(n==m)cout<<n+m<<endl;
          if(n==1)cout<<"0"<<endl;
          else if(n==2) cout<<m<<endl;
         else
            cout<<(a*2)+(b*2)<<endl;

    }
    return 0;
}
