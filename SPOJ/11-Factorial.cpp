#include<bits/stdc++.h>
using namespace std ;
int main()
{
    long long int n ;
    int count =0 ;
    int tc ;
    cin>>tc;
    while(tc--){
    cin>>n;
    long long int fac =1;
    int c =5 ;
    while(n/c>0)
    {
        count =count+(n/c);
        c=c*5;
    }
    cout<<count<<endl;


count = 0;
    }
    return 0 ;
}
