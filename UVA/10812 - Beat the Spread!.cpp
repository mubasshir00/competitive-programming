#include<bits/stdc++.h>
using namespace std ;
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        int s,d;
        cin>>s>>d;
        if(s>=d && (s+d)%2==0)
        {
            int a = (s+d)/2;
            int b =(s-d)/2;
            cout<<a<<" "<<b<<endl;
        }
        else cout<<"impossible"<<endl;
    }
    return 0;
}
