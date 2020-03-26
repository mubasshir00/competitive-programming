#include<bits/stdc++.h>
using namespace std ;
int main()
{

  string s ;
  int count =0;
  set<char>Set;
  long long n ;
  cin>>n;
  cin>>s;
  transform(s.begin(),s.end(),s.begin(),::tolower);
   for(int i=0;i<n;i++)
   {
       Set.insert(s[i]);
   }
   if(Set.size()==26)
   {
       cout<<"YES"<<endl;
   }
   else cout<<"NO"<<endl;

    return 0 ;
}
