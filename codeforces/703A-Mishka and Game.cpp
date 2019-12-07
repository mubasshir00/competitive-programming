#include<bits/stdc++.h>
using namespace std ;
int main()
{
    int n ;
    int m ,c ;
    int cm=0,cc=0;
 cin>>n;
 for(int i=0;i<n;i++)
 {
     cin>>m>>c;
     if(m>c)
     {
         cm++;
     }
     else if(m<c)
     {
         cc++;
     }
 }
 if(cm>cc)
 {
     cout<<"Mishka"<<endl;
 }
 else if(cm<cc)
 {
     cout<<"Chris"<<endl;
 }
 else cout<<"Friendship is magic!^^"<<endl;

    return 0 ;
}
