#include<bits/stdc++.h>
using namespace std ;
int main()
{

    int tc ;
    cin>>tc;
    getchar();
    while(tc--)
    {
        string s ;

        getline(cin,s);
        vector<int>v;
        istringstream x(s);
        int b ;
        while(x>>b)
        {
            v.push_back(b);
        }
        int m =0;
        for(int i=0;i<v.size()-1;i++)
            for(int j=i+1;j<v.size();j++)
        {
            int g = __gcd(v[i],v[j]);


        if(g>m)
        {
            m=g;
        }
        }
        cout<<m<<endl;
        m=0;
        v.clear();


    }
    return 0 ;
}
