#include<bits/stdc++.h>
using namespace std ;
int main()
{
    vector<string>v;
    int n ;
    int ans = 0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        string x ;
        cin>>x;
        v.push_back(x);
    }
    for(int i=0;i<n;i++)
    {
        if(v[i]=="Icosahedron")
        {
            ans =ans+20;
        }
        if(v[i]=="Dodecahedron")
        {
            ans =ans +12;
        }
        if(v[i]=="Octahedron")
        {
            ans = ans +8;
        }
        if(v[i]=="Cube")
        {
            ans = ans + 6;
        }
        if(v[i]=="Tetrahedron")
        {
            ans = ans + 4;
        }
    }
    cout<<ans<<endl;
    return 0 ;
}
