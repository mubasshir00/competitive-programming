#include<bits/stdc++.h>
using namespace std ;
int main()
{
    int n ;
    cin>>n;
    while(n--)
    {
        int a,b;
        cin>>a>>b;
        int x = min(a,b);
        int y = max(a,b);
        if(x+x<y)
        {
            cout<<pow(y,2)<<endl;
        }
        else
        {
            cout<<pow(x+x,2)<<endl;
        }
    }
    return 0;
}
