#include<bits/stdc++.h>
using namespace std ;
int main()
{
    bool f = false;
    int a[50][50];
    int i=1,j=1;
    for( i=1;i<=5;i++)
    {
        for( j=1;j<=5;j++)
        {
            cin>>a[i][j];
        }
    }
    int ans1;
    int ans2;
    for( i=1;i<=5;i++)
    {
        for( j=1;j<=5;j++)
        {
            if(a[i][j]==1)
            {
                //cout<<i<<" "<<j;
                ans1=abs(3-i);
                ans2=abs(3-j);
                break;
            }
        }
    }
cout<<ans1+ans2<<endl;
    return 0 ;
}
