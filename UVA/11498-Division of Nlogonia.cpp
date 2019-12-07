#include<bits/stdc++.h>
using namespace std ;
int main()
{
   int tc ;
   while(scanf("%d",&tc))
   {
       if(tc==0)break;
       int n,m;
       int a,b;
       cin>>n>>m;
       for(int i=0;i<tc;i++)
       {
           cin>>a>>b;
           if(a>n && b>m)cout<<"NE"<<endl;
           else if(a<n && b>m)cout<<"NO"<<endl;
           else if(a<n && b<m)cout<<"SO"<<endl;
           else if(a==n || b==m)cout<<"divisa"<<endl;
           else cout<<"SE"<<endl;
       }


   }

    return 0 ;
}
