    #include<bits/stdc++.h>
    using namespace std ;
     
    void permute(int  s)
    {
       if(s%2!=0)
       {
           cout<<"-1"<<endl;
       }
       else{
       for(int i=1;i<=s/2;i++)
       {
           cout<<(2*i)<<" "<<(2*i)-1<<" ";
       }
       }
     
    }
     
    int main()
    {
        int n;
        cin>>n;
        permute(n);
        return 0 ;
    }
