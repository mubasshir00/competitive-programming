#include<bits/stdc++.h>
using namespace std ;
int main()
{
    double n;
    double sum=0;
    int i ;
    while(cin>>n){
            if(n==0.00)break;
    for( i=2;i<=1000;i++)
    {
        sum=sum+(1.00/i);
        if(sum>=n)break;

    }
    //cout<<sum<<endl;
    cout<<i-1<<" card(s)"<<endl;
    sum =0;
    }
    return 0 ;
}
