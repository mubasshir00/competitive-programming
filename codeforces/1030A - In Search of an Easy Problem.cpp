#include<bits/stdc++.h>
using namespace std ;
int main()
{
    long long n ;
    vector<int>v;
    cin>>n;
    for(int i=0;i<n;i++)
    {
      int x ;
      cin>>x;
      v.push_back(x);
    }

    int f = 1;

    if(std::find(v.begin(),v.end(),f)!=v.end())
    {
        cout<<"HARD"<<endl;
    }
    else cout<<"EASY"<<endl;

    return 0 ;
}
