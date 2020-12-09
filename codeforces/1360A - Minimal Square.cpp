#include<bits/stdc++.h>
using namespace std ;
int main()
{
    long long n;
    cin>>n;
    while(n--)
    {
        int a,b;
        cin>>a>>b;
        int x = min(a,b);
        int y = max(a,b);
        cout<<max( pow((x+x),2) , pow(y,2) )<<endl;
    }
    return 0 ;
}
