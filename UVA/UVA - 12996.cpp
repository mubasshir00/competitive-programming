#include<bits/stdc++.h>
using namespace std ;
int main()
{
    int tc,sum=0;
    int f=0;
    int n,l;
    int a[1000];
    int b[1000];
cin>>tc;
 int T =1;
while(tc--)
{

    cin>>n>>l;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        cin>>b[i];
    }


        f=0;

         for(int i=0;i<n;i++)
            {
                sum=sum+a[i];
            }
            if(sum>l)
            {
                f=1;
            }
            else
            {
                for(int i=0;i<n;i++)
                {
                    if(a[i]>b[i])
                    {
                        f=1;
                        break;
                    }
                    else
                    {
                        f=0;
                    }
                }
            }



    if(f==1)cout<<"Case "<<T++<<": No"<<endl;
    else cout<<"Case "<<T++<<": Yes"<<endl;
    sum=0;
    //f=0;
}


    return 0 ;
}
