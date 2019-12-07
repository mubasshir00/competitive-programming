#include<bits/stdc++.h>
using namespace std ;
int main()
{
    vector<int>v;
    int n ;
    int sum=0;
    int avr =0;
    int ans=0;
    while(cin>>n)
    {
        if(n==-1)break;
        for(int i=0;i<n;i++)
        {
            int x ;
            cin>>x;
            v.push_back(x);
        }
        for(int i=0;i<v.size();i++)
        {
            sum=sum+v[i];
        }
        avr=sum/n;
        if(sum%n==0){
        for(int i=0;i<v.size();i++)
        {
            if(avr>v[i])
            {
                ans=ans+(avr-v[i]);
            }
        }
        cout<<ans<<endl;
        }
        else
        {
            cout<<"-1"<<endl;
        }
      v.clear();
      sum=0;
      ans=0;
      avr=0;
    }
    v.clear();
    return 0 ;
}
