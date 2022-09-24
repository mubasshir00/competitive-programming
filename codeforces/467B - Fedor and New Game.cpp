#include<bits/stdc++.h>
using namespace std ;
int main(){
    int n,m,k;
    int fl = 0;
    cin>>n>>m>>k;
    vector<int>v;
    for(int i=0;i<m+1;i++){
        int x ;
        cin>>x;
        v.push_back(x);
    }
    int count =0;
    for(int i=0;i<v.size()-1;i++){
        if ((__builtin_popcount(v[i]^v[m]))<=k){
         count++;
        }
    }
    cout<<count<<endl;
    return 0;
}
