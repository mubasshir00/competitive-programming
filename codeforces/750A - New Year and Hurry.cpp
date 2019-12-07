#include<bits/stdc++.h>
using namespace std ;
int main()
{
    int n ,k,sum=0 ;
    int a,b,c,d,i;
    cin>>n>>k;
    a=240-k;
    for( i=1;i<=n;i++)
    {
        sum+=5*i;
        if(sum>a)break;
    }
    cout<<i-1<<endl;
    return 0 ;
}
