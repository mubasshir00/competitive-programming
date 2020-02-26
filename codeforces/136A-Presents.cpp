    #include<bits/stdc++.h>
    using namespace std ;
    bool sortbysec(const pair<int,int> &a,
                  const pair<int,int> &b)
    {
        return (a.second < b.second);
    }
    int main()
    {
        vector<pair<int,int> >vect;
     
        int n ;
        cin>>n;
        int arr[n];
        for(int i=1;i<=n;i++)
        {
            cin>>arr[i];
        }
        for(int i=1;i<=n;i++)
        {
            vect.push_back(make_pair(i,arr[i]));
     
        }
            sort(vect.begin(), vect.end(), sortbysec);
            for(int i=0;i<n;i++)
            {
                cout<<vect[i].first<<" ";
            }
     
        return 0 ;
    }
