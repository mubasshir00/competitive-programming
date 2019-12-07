#include<bits/stdc++.h>
using namespace std ;
typedef long long ll;
const int N = 1e5 + 3;
ll v[N];
int main()
{
    long long n,c;

    cin>>n>>c;

    int count = 1,ab =0;
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    for(int i=0;i<n-1;i++)
    {
        if((v[i+1]-v[i])<=c)
        {
            count++;
        }
        else
        {
           count=1;
        }
    }
    cout<<count<<endl;

    return 0 ;
}
