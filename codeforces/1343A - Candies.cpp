#include<bits/stdc++.h>
using namespace std ;
int main()
{
    long long int n ;
    cin>>n;
    while(n--)
    {
        long long int v ;
        cin>>v;
        for(long long int i=2;i<=1000000000;i++)
        {
            int val = (1<<i)-1;
           // cout<<val<<endl;
            if(v%val==0)
            {
                cout<<v/val<<endl;
                break;
            }
        }
    }
    return 0;
}
