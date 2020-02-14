    #include<bits/stdc++.h>
    using namespace std ;
     
    int main()
    {
        string s1,s2,s3;
        cin>>s1;
        s2= "0000000";
        s3= "1111111";
         if(s1.find(s2) != string::npos)
         {
             cout<<"YES"<<endl;
         }
         else if(s1.find(s3) != string::npos)
         {
             cout<<"YES"<<endl;
         }
         else cout<<"NO"<<endl;
        return 0 ;
    }
