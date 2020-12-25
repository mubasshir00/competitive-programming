#include<bits/stdc++.h>
using namespace std ;
int main()
{
    int b;
    int barray[1000];
    int g ;
    int garray[1000];
    cin>>b;
    for(int i=0;i<b;i++)
    {
        cin>>barray[i];
    }
    cin>>g;
    for(int i=0;i<g;i++)
    {
        cin>>garray[i];
    }
    int count=0;
    sort(barray,barray+b);
    sort(garray,garray+g);
   for(int i=0;i<b;i++)
   {
       for(int j=0;j<g;j++)
       {
           if(barray[i]==garray[j] || barray[i]+1 == garray[j] || barray[i]-1 == garray[j] || barray[i] == garray[j]+1 || barray[i]==garray[j]-1)
           {
               count++;
               garray[j]=-22;
               break;
           }
       }
   }
   cout<<count<<endl;
    return 0;
}
