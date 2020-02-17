    #include<bits/stdc++.h>
    using namespace std ;
    int main()
    {
        int n ;
        cin>>n;
        int arr[1000];
        int sum =0;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            sum=sum+arr[i];
        }
        sort(arr,arr+n);
        int half = (sum/2);
        int count =0;
        int sum1=0;
        for(int i=n-1;i>=0;i--)
        {
            sum1=sum1+arr[i];
            if(sum1<=half)
            {
                count++;
            }
        }
        cout<<count+1;
     
        return 0 ;
    }
