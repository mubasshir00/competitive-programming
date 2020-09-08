#include<bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin>>tc;
    int x =0;
    while(tc--)
    {
      // x++;
       // cout<<"TesT case :"<<x<<endl;
        int f=0;
        int n;
        cin>>n;
        int p[2000],c[2000];
        for(int i=0;i<n;i++)
        {
            cin>>p[i]>>c[i];
        }
        if(n==1){
                if(p[0]>=c[0]){
           f=1;
                }
                else{
                    f=0;
                }
        }
         else if(p[0]<c[0])
                {
                    f=0;
                }
        else{
        for(int i=1;i<n;i++)
        {
            if( (( (p[i-1]<p[i]) and (c[i-1]<=c[i]) ) || ( (p[i-1])==p[i] and c[i-1]==c[i] )) and ( (p[i]-p[i-1]) >= (c[i]-c[i-1]) ) )
            {
                f=1;
            }
            else {
                f=0;
                break;
            }
        }

        }
        if(f==1)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}
