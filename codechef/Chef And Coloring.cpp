#include<bits/stdc++.h>
using namespace std ;
int main()
{
    int tc ;
    cin>>tc;
    int n ;
    int sum=0;
    string a ;
    int r=0;
    int g=0;
    int b=0;
    while(tc--)
    {
        cin>>n>>a;
        for(int i=0;i<n;i++)
        {
            if(a[i]=='R')r++;
            if(a[i]=='G')g++;
            if(a[i]=='B')b++;

        }

        sum=r+g+b;
        int maximum = max(r,max(g,b));
        cout<<sum-maximum<<endl;
        r=0,g=0,b=0;
    }
    return 0;
}
