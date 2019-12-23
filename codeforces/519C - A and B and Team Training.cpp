    #include<bits/stdc++.h>
    using namespace std ;
    int main()
    {
        long long n ;
        long long m;
        cin>>n>>m;
        long long a,b;
        a = max(m,n);
        b = min(m,n);
        if((b*2)<a)
        {
            cout<<b<<endl;
     
        }
        else
       cout<<floor((n+m)/3)<<endl;
        return 0;
    }
