#include<bits/stdc++.h>
using namespace std ;
int main()
{
   long long tc ;
   cin>>tc;
   while(tc--)
   {
       int n,m,k;
       cin>>n>>m>>k;
       int joker = n/k;
       double remain_joker = (m-joker);
       if(m==0)cout<<"0"<<endl;
       else if(remain_joker<0)
       {
           cout<<m<<endl;
       }
       else if(remain_joker ==1){
        cout<<joker-1<<endl;
       }
       else if(remain_joker==0){
        cout<<m<<endl;
       }
       else {
      // int temp1 = remain_joker-1;
       int temp2 = joker-ceil(remain_joker/(k-1));
        if(temp2<0)cout<<"0"<<endl;
        else
       cout<<temp2<<endl;
       }
   }
    return 0;
}
