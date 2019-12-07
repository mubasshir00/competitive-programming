#include<bits/stdc++.h>
using namespace std ;
int main()
{
 string a,b;
 int n,c=0,d;
 cin>>n;
 cin>>a>>b;
 for(int i=0;i<n;i++)

 {
     c = c+min(abs(a[i]-b[i]),10-abs(a[i]-b[i]));
 }
 cout<<c<<endl;
 return 0 ;
}
