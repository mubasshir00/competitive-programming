    #include<bits/stdc++.h>
    using namespace std ;
    map<long long ,long long>dp;
    long long coin(long long m)
    {
     
     
        if(m==0)
        {
            return m ;
        }
       if (m == 1){
          return m;
       }
       if(m==3)
        return m ;
     
       if (dp[m]!=0)
          return dp[m];
     
        return dp[m] = max(m,coin(m/2) + coin(m/3) + coin(m/4));
    }
     
    int main()
    {
        long long n;
        while(cin>>n){
        cout<<coin(n)<<endl;
        }
        return 0 ;
    }
     
