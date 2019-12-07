#include<bits/stdc++.h>
using namespace std ;
int w=0 ,b=0;

void check(char a)
{
    if(a=='Q')w=w+9;
    if(a=='q')b=b+9;
    if(a=='R')w=w+5;
        if(a=='r')b=b+5;
    if(a=='B')w=w+3;
    if(a=='b')b=b+3;
    if(a=='N')w=w+3;
    if(a=='n')b=b+3;
    if(a=='P')w=w+1;
    if(a=='p')b=b+1;
}

int main()
{
   char s[9][9];
   for(int i=0;i<8;i++)
   {
       for(int j=0;j<8;j++){
       cin>>s[i][j];
       check(s[i][j]);
       }
   }
   if(w>b)
   {
       cout<<"White"<<endl;
   }
   else if(w<b)cout<<"Black"<<endl;
   else cout<<"Draw"<<endl;
    return 0;
}
