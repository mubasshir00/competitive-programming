#include<bits/stdc++.h>
using namespace std ;
int c ;
int bm(int a,int b)
{
    if(b==0)return 1 ;
    if(b%2==0)
    {
        int ret = bm(a,b/2);
        return ((ret%c)*(ret%c))%c;
    }
    else
    {
        return ((a%c)*(bm(a,b-1)%c))%c;
    }
}
int main()
{
    int b,p;
    while(cin>>b>>p>>c){
    cout<<bm(b,p)<<endl;
    }
    return 0 ;
}
