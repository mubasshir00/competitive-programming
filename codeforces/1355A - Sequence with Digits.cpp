#include<bits/stdc++.h>
using namespace std ;
 
long long getDigit(long long n)
{
    long long r1 = 10 ;
    long long r2 = 0;
    while(n>0)
    {
        long long temp =n%10;
        n=n/10;
        r1 = min(r1,temp);
        r2 = max(r2,temp);
    }
    return r1*r2;
}
 
int main()
{
    long long tc;
    cin>>tc;
    while(tc--)
    {
        long long x,y;
        cin>>x>>y;
        y--;
        while(y--)
        {
            long long temp1 = getDigit(x);
            if(temp1==0)break;
            x=x+temp1;
        }
        cout<<x<<endl;
    }
    return 0;
}
