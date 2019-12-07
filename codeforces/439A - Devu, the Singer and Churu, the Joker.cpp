#include<bits/stdc++.h>
using namespace std ;
int main()
{
    int n ,m;
    cin>>n>>m;
    vector <int> v;
    for(int i=0;i<n;i++)
    {
        int x ;
        cin>>x;
        v.push_back(x);
    }
    int sum =0;
    for(int i=0;i<v.size();i++){
    sum=sum+v[i];
    }
    int a = sum+((n-1)*10);
  //  cout<<a<<endl;
    if(a<=m)
    {
        int b = m-a;
        cout<<((n-1)*2)+(m-a)/5<<endl;
    }
    else cout<<"-1"<<endl;
    return 0 ;
}
