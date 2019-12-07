#include<bits/stdc++.h>
#include <stack>
using namespace std ;
int main()
{
    string a;

        stack<char>S;
        getline(cin,a);
        int len = a.length();
        for(int i=0;i<len;i++)
        {
            if(!S.empty() && S.top()=='(' && a[i]==')' )
            {

                    S.pop();
            }
            else S.push(a[i]);


        }

       // cout<<S.size()<<endl;
        //cout<<a.size();
        cout<<a.size()-S.size()<<endl;



    return 0 ;
}
