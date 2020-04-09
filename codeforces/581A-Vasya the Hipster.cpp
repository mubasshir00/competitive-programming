#include<bits/stdc++.h>
using namespace std ;
int main()
{
    long long a,b;
    cin>>a>>b;
    long long x  = min(a,b);
    long long y = max(a,b);
    cout<<x<<" "<<floor((y-x)/2)<<endl;
    return 0 ;
}
