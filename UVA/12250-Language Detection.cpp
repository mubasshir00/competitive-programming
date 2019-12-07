#include<bits/stdc++.h>
using namespace std ;
int main()
{
   int tc =1;
   string a ;
   while(cin>>a)
   {
       if(a=="HELLO")cout<<"Case "<<tc++<<": ENGLISH"<<endl;
       else if(a=="HOLA")cout<<"Case "<<tc++<<": SPANISH"<<endl;
       else if(a=="HALLO")cout<<"Case "<<tc++<<": GERMAN"<<endl;
       else if(a=="BONJOUR")cout<<"Case "<<tc++<<": FRENCH"<<endl;
        else if(a=="CIAO")cout<<"Case "<<tc++<<": ITALIAN"<<endl;
        else if(a=="ZDRAVSTVUJTE")cout<<"Case "<<tc++<<": RUSSIAN"<<endl;
        else if(a=="#")break;
        else cout<<"Case "<<tc++<<": UNKNOWN"<<endl;
   }

    return 0 ;
}
