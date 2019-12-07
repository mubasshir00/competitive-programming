#include<bits/stdc++.h>
using namespace std;
int main()
{
    int y ;
    cin>>y;
    for(int i=y+1;i<=90000;i++)
    {
        int a =i%10;//
        int b =i/10;
        int c =b%10;//
        int d = i/100;
        int e = d%10;
        int f = i/1000;
        if(a!=c && a!=e && a!=f && c!=e && c!=f && e!=f)
        {
            cout<<i<<endl;
            return 0 ;
        }
    }
    return 0 ;
}
