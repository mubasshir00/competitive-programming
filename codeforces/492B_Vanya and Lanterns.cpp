#include<bits/stdc++.h>
using namespace std ;
int main()
{
    int n,m;
    double a,b;
    vector<int>v;
    cin>>n>>m;
    for(int i=0;i<n;i++)
    {
        int x ;
        cin>>x;
        v.push_back(x);
    }
    sort(v.begin(),v.end());
    int last = v[v.size()-1];
    //cout<<last;
    //int md = v[1]-v[0];
    int md=0;
    int nt=0;
    for(int i=0;i<n-1;i++)
    {
        md=max(md,v[i+1]-v[i]);
    }
    int k =(max(v[0],m-last))*2;
    //cout<<md;
   a = max(md,k);
   printf("%.10llf\n",a/2);


    return 0 ;
}
