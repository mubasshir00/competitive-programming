#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<string>s;
    unordered_map<string,int>hash;
    int n ;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        string x;
        cin>>x;
        s.push_back(x);
    }
    for(int i=0;i<n;i++)
        hash[s[i]]++;
     string res ;
    int max_count =0;
    for(auto i:hash){
        if(max_count<i.second){
            res=i.first;
            max_count=i.second;
        }
    }
    cout<<res<<endl;
    return 0;
}
