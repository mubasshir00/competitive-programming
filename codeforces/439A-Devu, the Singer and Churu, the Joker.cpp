#include<bits/stdc++.h>
using namespace std ;
typedef long long ll ;
const int N = 10e+5;
ll v[N];
int main()
{
    int n,m;
    cin>>n>>m;
    int sum=0;
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }

    for(int i=0;i<n-1;i++)
    {
        sum=sum+v[i]+10;
    }
    sum = sum+v[n-1];
    //cout<<sum;
    if(sum>m)
    {
        cout<<"-1"<<endl;
    }
    else

    {
        if(m<=5){
        cout<<"0"<<endl;
        return 0;
    }
        int x = sum+5;

        cout<<((n-1)*2 +1 ) + ((m-x)/5)<<endl;
        //cout<<((n-1)*2 );
    }
    return 0 ;
}
