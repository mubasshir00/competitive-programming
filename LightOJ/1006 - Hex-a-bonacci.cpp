#include<bits/stdc++.h>
using namespace std ;
int main()
{
  long long  int a,b,c,d,e,f,g,h,n;
  int kk=1;
 long long int fn[10000];
  int tc ;
  cin>>tc;
  while(tc--)
  {
      cin>>a>>b>>c>>d>>e>>f>>n;
      for(int i=0;i<=n;i++)
      {
          if(i==0) {
                fn[i]=a;
                continue;
          }
          if(i==1) {
                fn[i]=b;
                continue;
          }
          if(i==2) {
                fn[i]=c;
                continue;
          }
          if(i==3) {
                fn[i]=d;
                continue;
          }
          if(i==4) {
                fn[i]=e;
                continue;
          }
          if(i==5) {
                fn[i]=f;
                continue;
          }
          fn[i]=(fn[i-1]+fn[i-2]+fn[i-3]+fn[i-4]+fn[i-5]+fn[i-6])%10000007;
      }
      cout<<"Case "<<kk++<<": "<<(fn[n]%10000007)<<endl;
  }
}
