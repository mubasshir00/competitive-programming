#include<bits/stdc++.h>
using namespace std ;
int main()
{
    long long n ,m,k;
    cin>>n>>k;
    for(int i =1;i<=1000;i++){
            m=n*i;
    //cout<<m<<endl;
    if((m%10)==k)
    {
     cout<<i<<endl;
     break;
    }
    else if(m%10==0)
    {
        cout<<i<<endl;
        break;
    }
    }
    return 0 ;

}
