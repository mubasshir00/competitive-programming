#include<bits/stdc++.h>
using namespace std ;
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        int arr[1000];
        int n ;
        cin>>n;
        for(int i=0;i<2*n;i++)
        {
            cin>>arr[i];
        }
        for(int i=0;i<2*n;i++)
        {
            int j =0;
            for(j=0;j<2*n;j++)
            {
                if(arr[i]==arr[j])
                    break;
            }
            if(i==j)
                cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
    return  0 ;
}
