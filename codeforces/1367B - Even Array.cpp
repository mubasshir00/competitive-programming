#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long tc;
    cin>>tc;
    while(tc--)
    {
        long long n ;
        long long countA=0,countB=0;
        cin>>n;
        vector<long long>arr;
        for(int i=0;i<n;i++)
        {
            int x ;
            cin>>x;
            arr.push_back(x);
        }
        for(long long i=0;i<n;i++)
        {
            if(arr[i]%2==0 and i%2==1)
            {
                countA++;
            }
            if(arr[i]%2==1 and i%2==0)
            {
                countB++;
            }
        }
        if(countA==countB)
        {
            cout<<countA<<endl;
        }
        else cout<<"-1"<<endl;
    }
    return 0;
}
