#include<bits/stdc++.h>
using namespace std ;
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        int a,b;
        cin>>a>>b;
        long long c = a*b;
        if((c&1)==1)
        cout<<(c>>1)+1<<endl;
        else
            cout<<(c>>1)<<endl;
    }
    return 0;
}
