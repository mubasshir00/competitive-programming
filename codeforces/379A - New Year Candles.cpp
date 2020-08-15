#include<bits/stdc++.h>
using namespace std ;
int main()
{
    int a,b;
    cin>>a>>b;
    int ans = a ;
    int m = a;
    while(1)
    {
        ans = ans+(m/b);
        m = (m/b)+(m%b);
        if(m<b)
        {
            cout<<ans<<endl;
            break;
        }
    }
    return 0;
}
