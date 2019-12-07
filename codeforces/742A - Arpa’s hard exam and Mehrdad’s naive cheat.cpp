#include<bits/stdc++.h>
using namespace std ;
long long m =10;
long long binpow(long long a, long long b) {
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
   long long n ;
   cin>>n;
   cout<<binpow(1378,n)<<endl;
    return 0 ;
}
