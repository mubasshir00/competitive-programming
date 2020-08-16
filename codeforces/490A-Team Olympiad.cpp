#include<bits/stdc++.h>
using namespace std ;
int main()
{
    int n ;
    cin>>n;
    int arr[5009];
    vector<int>v1;
    vector<int>v2;
    vector<int>v3;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int temp1 =0,temp2=0,temp3=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==1)
        {
            temp1++;
            v1.push_back(i+1);
        }
        if(arr[i]==2)
        {
            temp2++;
            v2.push_back(i+1);
        }
        if(arr[i]==3)
        {
            temp3++;
            v3.push_back(i+1);
        }
    }
    int ans = min(temp1,min(temp2,temp3));
    cout<<ans<<endl;
    if(ans!=0)
    {
         for(int i=0;i<ans;i++)
         {
             cout<<v1[i]<<" "<<v2[i]<<" "<<v3[i]<<endl;
         }
    }
    return 0;
}
