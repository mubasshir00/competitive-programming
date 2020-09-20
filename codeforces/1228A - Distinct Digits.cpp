#include<bits/stdc++.h>
using namespace std ;

string intToString (int x)
{
    stringstream ss ;
    ss<<x;
    string s ;
    ss>>s;
    return s ;
}

int main()
{
    long long l,r;
    cin>>l>>r;
    set<char>s;
    for(long long i=l;i<=r;i++){
       string  str = intToString(i);
       for(long long j =0;j<str.length();j++){
        s.insert(str[j]);
       }
       if(s.size()==str.length()){
        cout<<i<<endl;
        return 0;
       }
       s.clear();
    }
    cout<<"-1"<<endl;
    return 0 ;
}
