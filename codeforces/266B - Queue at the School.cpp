#include<bits/stdc++.h>
using namespace std ;
int main()
{
    int n,m;
    cin>>n>>m;
    string s ;
    cin>>s;
    int i =0;
    int j =0;

while(m--){
  for(i=0;i<s.length();i++)
    {

        if(s[i]=='B' and s[i+1]=='G')
        {
            s[i]='G' ;
            s[i+1] = 'B' ;
           i++;
        }


        }
}



    for(int i=0;i<s.length();i++)
    {
        cout<<s[i];
    }
    return 0;
}
