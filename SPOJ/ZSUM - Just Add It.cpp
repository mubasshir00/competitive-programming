#include<bits/stdc++.h>
using namespace std ;


long long m =10000007;
/*long long bigmod(long long a,long long b)
{
    if(b==0) return 1;
    if(b%2==0)
    {
        long long ret = bigmod(a,b/2);
        return ((ret%m)*(ret%m))%m;
    }
    else
    {
        return ((a%m)*(bigmod(a,b-1)%m))%m;
    }
}*/

long long bigmod(long long a, long long b) {
    a %= m;
    long long res = 1;
    while (b > 0) {
        if (b & 1)
            res = res * a % m;
        a = a * a % m;
        b >>= 1;
    }
    return res;
}

int main()
{
    long long n,k;
    while(scanf("%lld %lld",&n,&k)){
            if(n==0 )break;
    long long Ssum =0,Ssum1=0,Ssum2=0;
    long long Psum =0,Psum1=0,Psum2=0;
    Ssum = (n*(n+1))/2;
    Psum = (n*(n+1))/2;
    {
        Ssum=Ssum + bigmod(Ssum,k);
        Psum=Psum+ bigmod(Psum,Psum);
    }
    Ssum1 = Ssum+ bigmod(n-1,k);
    Ssum2 = Ssum1 +bigmod(n,k);
    Psum1 = Psum + bigmod(n-1,n-1);
    Psum2 = Psum1 +bigmod(n,n);

    printf("%lld\n", ((Ssum2+Psum2+Ssum1+Psum1) - 2*(Ssum+Psum))%10000007);
    }
}
