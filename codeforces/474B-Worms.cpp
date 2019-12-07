#include<bits/stdc++.h>
using namespace std ;
vector<int>v;

int binS(int left ,int right ,int x )
{
    if(right>=left){
        int mid = left+(right-left)/2;

        if(v[mid]==x)
            return mid;
        if(v[mid]>x)
        {
            return binS(left,mid-1,x);
        }
        else
            return binS(mid+1,right,x);
    }
    return -1;

}
int main()
{
    int N,sum=0;
    cin>>N;
    long long int arr[N];
    for(int i=0;i<N;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<N;i++)
    {
        sum=sum+arr[i];
        v.push_back(sum);
    }
    int n;
    int a;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>a;
        int res = binS(0,v.size(),a);
        if(res!=-1)cout<<res+1<<endl;
        else
        {
            vector<int>::iterator low;
            low = lower_bound(v.begin(),v.end(),a);
            cout<<low-v.begin()+1<<endl;
        }
    }
    return 0 ;
}
