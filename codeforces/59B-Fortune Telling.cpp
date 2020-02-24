    #include<bits/stdc++.h>
    using namespace std ;
    int main()
    {
        int n ;
        cin>>n;
        int arr[104];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        sort(arr,arr+n);

        int sum =0;
        for(int i=0;i<n;i++)
        {
             sum = sum + arr[i];

        }
        //cout<<sum;
        if(n==1)
        {
            if(sum%2==1)cout<<sum;
            else cout<<"0";
            return 0;
        }

        if(sum%2==1)
        {
            cout<<sum<<endl;
        }

        else
        {
            int q=INT_MAX;
            for(int i=0;i<n;i++)
            {
                if(arr[i]%2 == 1)
                    q = min(q,arr[i]);
            }
            //cout<<q<<endl;
            int ans =0;
            ans = sum-q ;
            if(ans>=0)
            cout<<ans<<endl;
            else cout<<"0"<<endl;
        }


        return 0 ;
    }
