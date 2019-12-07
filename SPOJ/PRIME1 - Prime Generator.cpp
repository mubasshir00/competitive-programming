#include <bits/stdc++.h>
using namespace std;

vector<int>v;
bool checkprime(int n)
{
    if(n==1)return false ;
    int sq = sqrt(n);
    for(int i=2;i<=sq;i++)
    {
        if(n%i==0)
            return false ;

    }
    return true ;
}
int main()
{
    int n ,m;
    int tc ;
    cin>>tc;
    while(tc--)
    {
        cin>>n>>m;
        for(int j=n;j<=m;j++)
        {
            if(checkprime(j))
            {
                v.push_back(j);
            }
        }
        for(int i=0;i<v.size();i++)
        {
            cout<<v[i]<<" "<<endl;
        }
        v.clear();
    }
}
