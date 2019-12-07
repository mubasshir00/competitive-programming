#include<bits/stdc++.h>
using namespace std ;
vector<long long>v;
long long binpow(long long a, long long b, long long m) {
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
    long long tc ;


    while(cin>>tc )
    {
        if(tc==0)break;
        else{
                while(tc--){
        long long c,d,e;
        cin>>c>>d>>e;
        cout<<binpow(c,d,e)<<endl;
        //cout<<v[v.size()-1]<<endl;
       // v.clear();
                }
        }

    }
    return 0 ;
}
