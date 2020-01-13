#include<bits/stdc++.h>
using namespace std ;
int main()
{
    long long tc;
    cin>>tc;
    long long n ,x,a,b;
    while(tc--)
    {
        cin>>n>>x>>a>>b;
        long long y = abs(a-b);

        long long z = y+x ;
        if(z<n)
        {
            cout<<z<<endl;
        }
        else
        {
            n=n-1;
            if((z+x)<n)
            {
                cout<<z+x<<endl;
            }
            else
            {
                cout<<n<<endl;
            }


        }
    }
    return 0 ;
}
