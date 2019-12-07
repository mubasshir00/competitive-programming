#include<bits/stdc++.h>
using namespace std ;
int main()
{


    int a,b,c;
    vector<int>arr;
    int n ;
    while(cin>>n){
    for(int i=0;i<n;i++)
    {
       int x ;
       cin>>x;
       arr.push_back(x);
    }
    cin>>c;
    sort(arr.begin(),arr.end());
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]+arr[j]==c)
            {
                a=arr[i];
                b=arr[j];
                break;
            }
        }
    }
    cout<<"Peter should buy books whose prices are "<<a<<" and "<<b<<"."<<endl;
    cout<<endl;
    arr.clear();
    }

    return 0 ;
}
