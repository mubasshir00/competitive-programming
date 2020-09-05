#include<bits/stdc++.h>
using namespace std ;
int main()
{
     cin.tie(0);
    ios::sync_with_stdio(false);
    long long n,x;
    cin>>n>>x;
    long long count =0;
    while(n--)
    {
        string s ;
        long long I ;
        cin>>s>>I;
        if(s=="+")
        {
            x=x+I;
        }
        else if(s=="-")
        {
            if(x>=I)
            {
                x=x-I;
            }
            else count++;
        }
    }
    cout<<x<<" "<<count<<endl;
    return 0;
}
