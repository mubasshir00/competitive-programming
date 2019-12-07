#include<bits/stdc++.h>
using namespace std ;
int main()
{
   long long int m[107][107];
 long long    int n,l=1;
 long long    int tc ;
    cin>>tc;
    while(tc--)
    {
     long long    int n;
        string s1,s2;
        cin>>s1>>s2>>n;
        int f=0;
        for(long long int i=0;i<n;i++)
            for(long long int j=0;j<n;j++)
        {
            cin>>m[i][j];
        }

        for(long long int i=0;i<n;i++)
            for(long long int j=0;j<n;j++)
        {
            if(m[i][j]<0)
            {
                f=1;
                break;
            }
            else
            {
                if(m[i][j]!=m[n-1-i][n-1-j])
                {
                    f=1;
                    break;

                }
            }
        }
        if(f==0)cout<<"Test #"<<l++<<": Symmetric."<<endl;
        else cout<<"Test #"<<l++<<": Non-symmetric."<<endl;
        f=0;
        continue;
    }
    return 0 ;
}
