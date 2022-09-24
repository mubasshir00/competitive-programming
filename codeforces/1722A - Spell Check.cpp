#include<bits/stdc++.h>
using namespace std ;
int main(){
    string temp = "Timur";
    sort(temp.begin(),temp.end());

    long long int t ;
    cin>>t;
    while(t--){
        long long int n;
        cin>>n;
        string x ;
        int f =0;
        cin>>x;
        int count =0;
        sort(x.begin(),x.end());
        if(x==temp){
            cout<<"Yes"<<endl;
        } else {
            cout<<"No"<<endl;
        }
    }
    return 0 ;
}
