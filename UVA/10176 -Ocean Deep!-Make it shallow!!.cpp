#include<bits/stdc++.h>
using namespace std ;
int main()
{

    char ch ;
    string s ;
    while(cin>>ch)
    {
        //if(ch=="#")break;
       // int num = ch -'0';
          int num ;

            if(ch=='#'){
                     int dec =0;

                   for(int i=0;i<s.length();i++)
                   {
                        dec= dec*2;
                       dec+=s[i]-'0';

                       dec=dec%131071;


                   }

    if(dec==0)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    s="";
            }
            else
            {
                s+=ch;
            }



    }

    return 0 ;
}
