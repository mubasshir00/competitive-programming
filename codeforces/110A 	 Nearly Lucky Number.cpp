    #include<bits/stdc++.h>
    using namespace std ;
    int main()
    {
        string n ;
        cin>>n;
        int count =0;
        for(int i=0;i<n.length();i++)
        {
            if(n[i]=='4' || n[i]=='7')count++;
        }
        if(count == 7 || count == 4)
        {
            cout<<"YES"<<endl;
        }
        else cout<<"NO"<<endl;
        return 0 ;
    }
