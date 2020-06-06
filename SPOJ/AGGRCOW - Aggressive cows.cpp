#include<bits/stdc++.h>
using namespace std ;
vector<long long>v;
long long C ;
long long check(long long q)
{
    long long pos = v[0];
    long long cow = 1;
    for(long long i=1;i<v.size();i++)
    {
        if(v[i]-pos>=q)
        {
            cow++;
            cout<<"cow "<<cow<<endl;
            pos = v[i];
            cout<<pos<<endl;
            if(cow==C)
            {
                return 1 ;
            }
        }
    }
    return 0 ;
}


long long binarySearch(long long N)
{
    long long low = 0;
    long long high = v[N-1];
    long long mx = -1;
    while(high>low)
    {
        long long mid = (high+low)/2;
        if(check(mid)==1)
        {
            if(mid>mx)
            {
                mx = mid ;
                low=mid+1;
            }
        }
        else
            high = mid;
    }
    return mx ;
}

int main()
{
    long long tc ;
    cin>>tc;
    while(tc--){
    long long N;
    cin>>N>>C;
    for(long long i=0;i<N;i++)
    {
        long long x ;
        cin>>x;
        v.push_back(x);
    }
    sort(v.begin(),v.end());
    cout<<binarySearch(N)<<endl;
    v.clear();
    }
    return 0 ;
}
