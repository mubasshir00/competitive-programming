#include<bits/stdc++.h>
using namespace std ;
int main()
{
    long long int participants ,budget,hotels,weeks;
        while(scanf("%lld %lld %lld %lld",&participants,&budget,&hotels,&weeks)==4)
    {
       long long int price,beds,a,b;
      long long  int c = 77777777777;
        for(int i=0;i<hotels;i++)
        {
            cin>>price;
            for(int i=0;i<weeks;i++)
            {
             cin>>beds;

             a=0;
             if(beds>=participants)
             {
                 a=participants*price;
                 if(c>=a)
                 {
                     c=a;
                 }
             }

            }
        }
        if(c<=budget)
        {
            cout<<c<<endl;
        }
        else cout<<"stay home"<<endl;
    }
    return 0 ;
}
