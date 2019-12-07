#include<bits/stdc++.h>
using namespace std  ;
int main()
{
    int n ;
    int r =0 ;
    while(scanf("%d",&n))
    {
        if(n==0)break;
        else
        {
            r  = ((2*n)+1)*(n+1)*n;
            cout<<r/6<<endl;
        }
    }
    return 0 ;
}
