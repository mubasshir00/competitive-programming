#include<bits/stdc++.h>
using namespace std ;
vector<long long int>v;
long long lcm(long long a,long long b)
{
    return (a/__gcd(a,b)*b);
}
int main()
{
   long long  tc,i=1,kk=1,ans;
    cin>>tc;
    while(tc--)
    {
        int flag =1;
        ans = 0;
       long long  a,b,l,temp;
        cin>>a>>b>>l;
        temp=l;
        long long int ab ;
        for(i=1;i<=sqrt(l);i++)
        {
            if(l%i==0){
            v.push_back(i);
if(l%i!=i)
                v.push_back(l/i);

        }
        }

        sort(v.begin(),v.end());
        for(int i=0;i<v.size();i++){
        ab=lcm(v[i],lcm(a,b));
        if(ab==temp)
        {
            flag =0;
           ans =v[i];
           break;

        }

        }
        if(flag==0)cout<<"Case "<<kk++<<": "<<ans<<endl;
        else cout<<"Case "<<kk++<<": impossible"<<endl;

v.clear();
    }
    return 0 ;
}
