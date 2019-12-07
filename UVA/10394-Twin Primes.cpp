#include<bits/stdc++.h>
#define N 100000007
using namespace std ;
char arr[N];
vector<int>v;
void sieve()
{
    arr[0]=1;
    arr[1]=1;
    for(int i=4;i<=N;i+=2)
    {
        arr[i]=1;
    }
    for(int i=3;i*i<=N;i+=2)
    {
        if(arr[i]==0)
        {
            for(int j=i;i*j<=N;j++)
            {
                arr[i*j]=1;
            }
        }
    }
    for(int i=2;i<N-2;i++)
        {
            if(arr[i]!=1 and arr[i+2]!=1)
            {
                v.push_back(i);
            }
        }
}

int main()
{
    sieve();
    int n ;
    while(cin>>n)
    {
        cout<<"("<<v[n-1]<<", "<<v[n-1]+2<<")"<<endl;
    }

    return 0 ;
}
