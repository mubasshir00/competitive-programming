#include<bits/stdc++.h>
using namespace std ;
int sumd (int num )
{
    int sum=0;
    while(num!=0)
    {
        sum=sum+(num%10);
        num=num/10;
    }
    return sum;
}

int main()
{
    int num ,a,b,c,d;
    while(scanf("%d",&num)){
    //cout<<sumd(num);

    if(num==0)break;
    else{
    a=sumd(num);
if(a<10)
{
    cout<<a<<endl;
}
  else
{
      b=sumd(a);
      if(b<10)
      {
          cout<<b<<endl;
      }
      else
      {
          c=sumd(b);
          cout<<c<<endl;
      }

  }
    }

    }
    return 0 ;
}
