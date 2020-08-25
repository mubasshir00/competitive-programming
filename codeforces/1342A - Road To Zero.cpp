#include<bits/stdc++.h>
using namespace std ;
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        long long x ,y;
        cin>>x>>y;
        long long a,b;
        cin>>a>>b;
        if(a+a<=b)
        {
            cout<<(x+y)*a<<endl;
        }
        else {
        long long q = min(x,y)*b;
       // cout<<q<<endl;
        long long w = max(x,y)-min(x,y);
        cout<<(q+(a*w))<<endl;
        }
    }
    return 0;
}
