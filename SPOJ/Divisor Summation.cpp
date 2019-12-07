
#include<bits/stdc++.h>
using namespace std ;
int main()
{
    int tc ;
    int a, b ,c,d;
    int sum=0;
    cin>>tc;
    while(tc--)
    {

        cin>>a;
        if(a==1)cout<<"0"<<endl;
        else{
        b=sqrt(a);
        for(int i=2;i<=b;i++)
        {
            if(a%i==0)
            {
                if(i==(a/i))
                {
                    sum+=i;
                }
                else
                {
                    sum+=(i+a/i);
                }
            }

        }
        cout<<sum+1<<endl;;
        sum=0;
        }
    }

    return 0 ;
}
