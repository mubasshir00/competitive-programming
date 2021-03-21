#include<bits/stdc++.h>
using namespace std ;
int main()
{
    string s ;
    cin>>s;
    int count =0;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]=='4' || s[i]=='7'){
            count++;
        }
    }
    if(count == s.length()){
        cout<<"YES"<<endl;
    }
    else {
        stringstream strtoint(s);
        int x ;
        strtoint>>x;
        if(x%7==0 || x%4==0 || x%47==0 || x%744==0 || x%74==0){
            cout<<"YES"<<endl;
        }
        else cout<<"NO"<<endl;
    }
    return 0;
}
