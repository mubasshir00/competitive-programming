#include<bits/stdc++.h>
using namespace std ;
int main()
{
    vector<int>v;
    vector<int>v1;
    int n ;
    while(cin>>n){
            bool f= true;
    for(int i=0;i<n;i++)
    {
        int x ;
        cin>>x;
        v.push_back(x);
    }

    for(int i=0;i<v.size()-1;i++)
    {
       v1.push_back(abs(v[i+1]-v[i]));
    }
    sort(v1.begin(),v1.end());
    for(int i=1;i<n;i++){
        if(v1[i-1]==v1[i]){
                f=false;break;
        }
    }
    if(f==false)cout<<"Not jolly"<<endl;
    else cout<<"Jolly"<<endl;
    v.clear();
    v1.clear();
    }
    return 0 ;
}
