#include<bits/stdc++.h>
using namespace std ;
int main()
{
    int n,k;
    int x=0 ;
int f=0;
    cin>>n>>k;

        for(x=1;x<10;x++){
        if((n*x)%10==k || (n*x)%10==0)
        {
            //f=0;
            cout<<x<<endl;
            return 0 ;
        }
        }
        /*else
        {
            f=1;
        }

        }

   if(f!=0)cout<<(n*k)/n<<endl;*/
    return 0 ;
}
