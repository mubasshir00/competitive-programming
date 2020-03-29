#include<bits/stdc++.h>
using namespace std ;
int main()
{
    int n ;
    double l;
    cin>>n>>l;
    vector<double>v;
    for(long long i=0;i<n;i++)
    {
        int x ;
        cin>>x;
        v.push_back(x);
    }
    sort(v.begin(),v.end());
    double maxd = 0;
    for(long long i=0;i<n-1;i++)
    {
        maxd = (max(maxd,abs(v[i+1]-v[i])));
    }

    //float ans = maxd/2.0;
  // float  f = max(maxd/2.0,max(v[0],l-v[n-1]));

     printf("%.10lf",max(maxd/2,max(v[0],l-v[n-1])));
    return 0 ;
}
