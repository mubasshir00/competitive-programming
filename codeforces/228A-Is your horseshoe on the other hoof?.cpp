#include<bits/stdc++.h>
using namespace std ;
int main()
{
    set<int>s;

    for(long long i=0;i<4;i++)
    {
        long long h ;
        cin>>h;
        s.insert(h);

    }
    cout<<abs(4-(s.size()))<<endl;

    return 0 ;
}
