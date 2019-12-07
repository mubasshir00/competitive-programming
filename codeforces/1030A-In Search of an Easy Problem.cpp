#include<bits/stdc++.h>
using namespace std ;
int main()
{
    int n ;
    int count =0;
   int v[1000];
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>v[i];

    }
    for(int i=1;i<=n;i++)
    {
        if(v[i]==1)
        {
          count++;
        }

    }
    //cout<<count;
    if(count==0)cout<<"EASY"<<endl;
    else cout<<"HARD"<<endl;

    return 0 ;
}
