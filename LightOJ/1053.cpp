#include<bits/stdc++.h>
using namespace std ;
int main()
{
    int tc,j=1 ;
    int a,b,c ,d ;
    cin>>tc;
    while(tc--){
    vector<int>v;
    for(int i=0;i<3;i++)
    {
        int x ;
        cin>>x;
        v.push_back(x);
    }
    sort(v.begin(),v.end());
    d=sqrt(pow(v[0],2) + pow(v[1],2));
    if(d==v[2])cout<<"Case "<<j++<<": yes"<<endl;
    else cout<<"Case "<<j++<<": no"<<endl;
    v.clear();

    }
    return 0 ;
}
