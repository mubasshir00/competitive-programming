#include<bits/stdc++.h>
using namespace std ;
int main()
{
    long long tc;
    cin>>tc;
    while(tc--)
    {
        long long n ;
        cin>>n;
        double sum=0;
        vector<long long>v;
        vector<long long>::iterator ip;
        for(int i=0;i<n;i++)
        {
            long long x;
            cin>>x;
            v.push_back(x);
        }
        for(int i =0;i<v.size();i++)
        {
            sum=sum+v[i];
        }
        cout<<(int)ceil((double)sum/n)<<endl;
    }
    return 0;
}
