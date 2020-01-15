#include<bits/stdc++.h>
using namespace std ;
int main()
{
    long long n;
    while(cin>>n)
    {
        if(n==0)break;
        string s ;
        cin>>s;
        char mat[100][100];
        long long i ,j,k=0;
        long row = s.length()/n;
        for(i=0;i<row;i++)
        {
            if(i%2==0)
            {
                for(j=0;j<n;j++)
                {
                    mat[i][j]=s[k++];
                }
            }
            else
            {
                for(j=n-1;j>=0;j--)
                {
                    mat[i][j]=s[k++];
                }
            }
        }
        for(long long i=0;i<n;i++)
        {
            for(long long j=0;j<row;j++)
            {
                cout<<mat[j][i];
            }
        }
        cout<<endl;
    }
    return 0 ;
}
