#include<bits/stdc++.h>
using namespace std ;
int main()
{
   long long int tc ,a,b;
    cin>>tc;
    while(tc--)
    {
      long long   int count=0,ans;
      long long   int m = INT_MIN;
        cin>>a>>b;
        for(int i=a;i<=b;i++)
        {
            count=0;
            for(long long int j=1;j<=sqrt(i);j++)
            {
                if(i%j==0)
                {
                    count++;
                    if(i/j!=j)
                    {
                        count++;
                    }
                }
                         if(m<count)
                         {
                             m=count;
                             ans=i;
                         }


            }

        }
        cout<<"Between "<<a<<" and "<<b<<", "<<ans<<" has a maximum of "<<m<<" divisors."<<endl;
    }
    return 0 ;
}
