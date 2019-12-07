#include<bits/stdc++.h>
using namespace std ;
int main()
{
    int n ;
    cin>>n;
    if(n%2==0)
    {
        int a = n/2;
        cout<<a<<endl;
        for(int i=0;i<a;i++)
        {
            cout<<"2 ";
        }
    }
    else
    {
        int a = (n-1)/2;
        cout<<a<<endl;
        for(int i=0;i<a-1;i++)
        {
            cout<<"2 ";
        }
        cout<<"3";
    }
    return 0 ;
}
