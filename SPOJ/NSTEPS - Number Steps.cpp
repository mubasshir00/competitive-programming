#include<bits/stdc++.h>
using namespace std ;
int main()
{
    int n ;
    int x,y;
    int sum=0;
    cin>>n;
    while(n--)
    {
        cin>>x>>y;
        if(x%2==0 && x==y )
        {
            cout<<x+y<<endl;
        }
         else
         {
             if(x%2==1 &&((y==x-2) || (y==x)))cout<<x+y-1<<endl;
             else if(x%2==0 &&((y==x-2) || (y==x)))cout<<x+y<<endl;
             else cout<<"No Number"<<endl;
         }

    }
    return 0;
}
