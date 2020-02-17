#include<bits/stdc++.h>
using namespace std ;
int main()
{
    string s ;
    cin>>s;
    std::size_t found = s.find('H');
    std::size_t found1 = s.find('Q');
    std::size_t found2 = s.find('9');
    //std::size_t found3 = s.find("+");
    if((found!=std::string::npos)||(found1!=std::string::npos)||(found2!=std::string::npos))
    {
        cout<<"YES"<<endl;
    }
    else cout<<"NO"<<endl;


    return 0 ;
}
