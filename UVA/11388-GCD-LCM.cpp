#include<bits/stdc++.h>
using namespace std ;
int gcd(int a,int b)
{
    if(a%b==0)return b ;
    return gcd(b,a%b);
}
int lcm(int a,int b)
{
    return (a/(gcd(a,b)))*b;
}

int main()
{
    int tc ;
    long long int x,y;
    cin>>tc;
    while(tc--)
    {
        cin>>x>>y;
        if(gcd(x,y)==x && lcm(x,y)==y)
        {
            cout<<x<<" "<<y<<endl;
        }
        else cout<<"-1"<<endl;

    }
    return 0 ;
}
