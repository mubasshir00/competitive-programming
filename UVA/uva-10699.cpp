#include<bits/stdc++.h>
using namespace std ;
int main()
{

    int n ;
    while(cin>>n){
    int temp =n ;
    if(n==0)break;
    vector<int>v;

    for(int i=2;i<=sqrt(n);i++)
    {
        if(n%i==0)
        {
            v.push_back(i);
            n=n/i;
            i=1;
        }
    }
    v.erase(unique(v.begin(),v.end()),v.end());
    cout<<temp<<" : "<<v.size()+1<<endl;

    v.clear();
    }
    return 0 ;
}
