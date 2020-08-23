#include<bits/stdc++.h>
using namespace std ;
int main()
{
    long long tc;
    cin>>tc;
    while(tc--)
    {
        long long a,b;
        cin>>a>>b;
        if(a==b)cout<<"0"<<endl;
        else if(a<b)
        {
            if(((b-a)&1)==1)
            {
                cout<<"1"<<endl;
            }
            else
                cout<<"2"<<endl;
        }
        else
        {
            if(((a-b)&1)==0)
                cout<<"1"<<endl;
            else cout<<"2"<<endl;
        }
    }
    return 0;
}
