#include<bits/stdc++.h>
using namespace std ;
int main()
{
    string s;
    cin>>s;
    int count =0;
    int f =0;
for(int i=0;i<s.length();i++){
     if (s[i]=='1' and s[i+1]=='4' and s[i+2] =='4'){
        i=i+2;
        f=1;
    }
    else  if (s[i]=='1' and s[i+1]=='4'){
        i=i+1;
        f=1;
    }
    else if( (s[i]=='1')){
        f=1;
    }
    else {
        f=0;
        break;
    }
}
if(f==1)cout<<"YES"<<endl;
else cout<<"NO"<<endl;
    return 0;
}
