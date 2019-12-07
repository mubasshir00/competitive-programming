#include<bits/stdc++.h>
using namespace std;
int main()
{
    set<string>Set;
    string S ;
    while(cin>>S)
    {
        string s1 ="" ;
        for(int i=0;i<S.length();i++)
        {
            S[i] = tolower(S[i]);
            if(S[i]>='a' && S[i]<='z')
            {
                s1=s1+S[i];
            }
            else
            {
                if(s1.size()!=0)
                {
                    Set.insert(s1);

                }
                s1="";
            }
        }
        if(s1.size()!=0)
        {
            Set.insert(s1);
        }
         // s1="";

    }
    set<string>::iterator it ;
    for(it=Set.begin();it!=Set.end();it++)
    {
        cout<<*it<<endl;
    }
    Set.clear();

	return 0 ;
}
