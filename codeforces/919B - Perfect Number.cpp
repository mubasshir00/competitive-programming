#include<bits/stdc++.h>
using namespace std ;
typedef long long ll ;
ll sumof(ll n)
{
  ll sum =0;
  while (n != 0)
    {
     sum = sum + n % 10;
     n = n/10;
    }
 return sum;
}
int main()
{

    vector<ll>v;
    ll n ;
    for(ll i=1;i<=100000000;i=i+9)
    {
        if(sumof(i)==10)
        {
            v.push_back(i);
        }
    }
    cin>>n;
    cout<<v[n-1]<<endl;
    return 0 ;
}
