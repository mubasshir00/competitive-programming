    #include<bits/stdc++.h>
    using namespace std;
     
    int main()
    {
     
        int arr[1006];
        int arr1[1007];
        int arr2[1008];
        int n;
        cin>>n;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i]>>arr1[i]>>arr2[i];
        }
        int c0=0,c1=0;
        for(int i=0;i<n;i++)
        {
            if((arr[i]+arr1[i]+arr2[i])>=2)
            {
                c0++;
            }
            else c1++;
        }
      cout<<c0<<endl;
        return 0 ;
    }
