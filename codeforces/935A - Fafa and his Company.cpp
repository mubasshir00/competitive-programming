    #include<bits/stdc++.h>
    using namespace std ;
    vector<int>v;
    void printdivisors(int n)
    {
     
        for(int i=1;i<=sqrt(n);i++)
        {
            if(n%i==0)
            {
             if(n/i==i)   {
                v.push_back(i);
            }
            else
            {
                v.push_back(n/i);
                v.push_back(i);
            }
     
     
    }
        }
    }
    int main()
    {
     
        long long a;
        cin>>a;
          printdivisors(a);
          cout<<v.size()-1<<endl;
        return 0 ;
    }
