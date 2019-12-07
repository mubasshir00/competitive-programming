#include<bits/stdc++.h>
using namespace std ;
int main()
{
    long long int  s ;
    int tc;
    int j=1;
    cin>>tc;
    while(tc--){
    cin>>s;
    //istringstream x(s);
    int bin ;
    vector<long long int>v;
    while(s!=0)
    {

        bin=s%2;
        s/=2;
        v.push_back(bin);


    }
    int count=0;
    for(int i=0;i<v.size();i++)
    {
        if(v[i]==1)count++;
    }
    if(count%2==0)cout<<"Case "<<j++ <<": even"<<endl;
    else cout<<"Case "<<j++<<": odd"<<endl;
    }
    return 0 ;
}
