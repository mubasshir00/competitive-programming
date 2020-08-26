#include<bits/stdc++.h>
using namespace std ;
int main()
{
    string s1 ="qwertyuiop";
    string s2 = "asdfghjkl;";
    string s3 = "zxcvbnm,./";
    string s4;
    string s;
    cin>>s4>>s;
    for(int i=0;i<s.length();i++)
    {
        std::size_t found = s1.find(s[i]);
       // std::size_t found1 = s2.find(s[i]);
        //std::size_t found2 = s3.find(s[i]);

        if(found!=std::string::npos){
        if(s4=="R")
        {
            cout<<s1[found-1];
        }
        else if (s4=="L")
        {
            cout<<s1[found+1];
        }
        }
        else
        {
             std::size_t found1 = s2.find(s[i]);
        if(found1!=std::string::npos){
        if(s4=="R")
        {
            cout<<s2[found1-1];
        }
        else if (s4=="L")
        {
            cout<<s2[found1+1];
        }
        }
        else
        {
                    std::size_t found2 = s3.find(s[i]);
                    if(found2!=std::string::npos){
        if(s4=="R")
        {
            cout<<s3[found2-1];
        }
        else if (s4=="L")
        {
            cout<<s3[found2+1];
        }
        }
        }
        }

    }
    return 0;
}
