#include<bits/stdc++.h>
using namespace std ;
int main()
{
    string s ;
    int countL =0 ,countU =0;
    cin>>s;
    for(int i=0;i<s.length();i++)
    {
        if(islower(s[i])){
            countL++;
        }
        if(isupper(s[i])){
            countU++;
        }
    }
    if(countU>countL){
        transform(s.begin(),s.end(),s.begin(),::toupper);
        cout<<s<<endl;
    }
    else {
        transform(s.begin(),s.end(),s.begin(),::tolower);
        cout<<s<<endl;
    }
    return 0;
}
