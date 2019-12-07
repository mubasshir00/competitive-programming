#include<bits/stdc++.h>
using namespace std ;
int main()
{
    char a[150][150];
    int n,m ;
    int count =0;
    int x=0,y=0;
    cin>>n>>m;
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
    {
        cin>>a[i][j];
    }
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
        {
            if(a[i][j]=='B')
            {
                count++;
                x=x+i;
                y=y+j;
            }
        }
    int c = x/count;
    int b = y/count;

    cout<<c+1<<" "<<b+1;

    return 0 ;
}
