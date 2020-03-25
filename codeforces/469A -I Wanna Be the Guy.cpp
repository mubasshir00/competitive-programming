    #include<bits/stdc++.h>
    using namespace std ;
    int main()
    {
        int n ;
        int p ,q;
        set<int>s;
        int arr1[1000];
        int arr2[1000];
        cin>>n;
        cin>>p;
        for(int i=0;i<p;i++)
        {
            cin>>arr1[i];
            s.insert(arr1[i]);
        }
        cin>>q;
        for(int j=0;j<q;j++)
        {
            cin>>arr2[j];
            s.insert(arr2[j]);
        }
        if(s.size()==n)
        {
            cout<<"I become the guy."<<endl;
        }
        else cout<<"Oh, my keyboard!"<<endl;
     
     
        return 0 ;
    }
