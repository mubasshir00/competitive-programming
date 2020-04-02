#include<bits/stdc++.h>
using namespace std ;
int isprime(long long number)
{
    int root = sqrt(number);
    for(int i= 2;i<number;i++)
    {
        if(number%i==0)
        {
            return 1 ;
        }
    }
      return 0 ;
}
int main()
{
    long long n ;
    cin>>n;

    if(n%2!=1)
    {
         long long x = n/2;
         long long y = x ;
         int i =0;
        while(i!=n)
        {


            i++;
            if((isprime(x)==1) and (isprime(y) == 1) )
            {
                cout<<x<<" "<<y<<endl;
                break;

            }
             x=x-1;
            y=y+1;


        }
    }
    else
    {
        long long x = ((n-1)/2)+1;
        long long y = n-x;

         int i =0;
        while(i!=n)
        {


            i++;
            if((isprime(x)==1) and (isprime(y) == 1) )
            {
                cout<<x<<" "<<y<<endl;
                break;

            }
             x=x-1;
            y=y+1;


        }

    }
    return 0 ;
}
