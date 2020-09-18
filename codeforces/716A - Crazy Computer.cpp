//I do code for marry Tamanna .
#include<bits/stdc++.h>
using namespace std ;
int main()
{
    long long n,m;
    cin>>n>>m;
    vector<long long>v;
    for(long long i=0;i<n;i++){
        long long x ;
        cin>>x;
        v.push_back(x);
    }
    //sort(v.begin(),v.end());
    long long count =0;
    for(long long i=0;i<v.size()-1;i++)
    {
        if((v[i+1]-v[i])>m){
                count =0;
        }
        else {
            count++;
        }
    }
    cout<<count+1<<endl;
    return 0;
}
