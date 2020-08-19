#include<bits/stdc++.h>
using namespace std ;
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        int a;
        cin>>a;
        if((a&1)==1)
        cout<<(a>>1)+1<<endl;
        else
            cout<<(a>>1)<<endl;
    }
    return 0;
}
