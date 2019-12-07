#include<bits/stdc++.h>
using namespace std ;
vector<long long>v;
void sieve(long long n )
{
    bool prime[n+1];
    memset(prime,true,sizeof(prime));
    for(int p=2;p*p<=n;p++)
    {
        if(prime[p]==true)
        {
            for(int i=p*p;i<=n;i+=p)
                prime[i]=false;
        }
    }
    for(int p=2;p<=n;p++)
        if(prime[p])
       v.push_back(p);
 
}
int main()
{
        sieve(100000000);
 
 
    for(int i=0;i<v.size();i++)
    {
        if(i%100==0)
        {
            cout<<v[i]<<endl;
        }
    }
    return 0;
}
