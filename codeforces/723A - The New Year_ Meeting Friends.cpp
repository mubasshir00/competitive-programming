#include<bits/stdc++.h>
using namespace std ;
int main()
{
   int a,b,c;
   vector<int>v;
   int n;
   for(int i=0;i<3;i++)
   {
       int x ;
       cin>>x;
       v.push_back(x);
   }
   sort(v.begin(),v.end());
   a =v[2]-v[0];
   cout<<a<<endl;
    return 0 ;
}
