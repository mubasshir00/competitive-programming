#include<bits/stdc++.h>
using namespace std ;
int main()
{
    int n ,m ;
    int arr1[1000],arr2[1000];
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>arr1[i];
    }
    cin>>m;
    for(int i=0;i<m;i++)
    {
        cin>>arr2[i];
    }
    sort(arr1,arr1+n);
    sort(arr2,arr2+m);
    int j =0;
    int count =0;
    int temp =0;
    for(int i=0;i<n;i++)
        for( j=temp;j<m;j++)
        {
            if(((arr1[i]-1 == arr2[j]) || (arr1[i]+1 == arr2[j]) || (arr1[i]==arr2[j])) and (arr2[j]!=0)){
                count++;
               arr2[j]=0;
                break;
            }
        }

    cout<<count<<endl;
    return 0;
}
