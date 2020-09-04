#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n ;
    cin>>n;
    while(n--)
    {
        int count =0;
        int ans =0;
        string s;
        cin>>s;
        int f =0;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='1')
            {
                for(int j=i+1;j<s.length();j++)
                {
                    if(s[j]=='0')
                    {
                        count++;
                    }
                    else
                    {
                       ans = count;
                        i=j+1;
                    }
                }
            }
        }
        cout<<ans<<endl;
       // cout<<count<<endl;
        ans =0;
    }
    return 0;
}
