#include<bits/stdc++.h>
using namespace std ;



int main()
{
    int n,m;
    int arr1[1000],arr2[1000];
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr1[i];
    }
    cin>>m;
    for(int j=0;j<m;j++){
        cin>>arr2[j];
    }
    sort(arr1,arr1+n);
    sort(arr2,arr2+m);
    cout<<arr1[n-1]<<" "<<arr2[m-1]<<endl;
    return 0 ;
}
