#include<bits/stdc++.h>
using namespace std ;
int main()
{
   // vector<int>v;
    vector<int>v1;
    vector<int>v2;
    vector<int>v3;
    int v[10000];
    int n ;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
        if(v[i]==1){
              v1.push_back(i);
        }
        if(v[i]==2)
        {
            v2.push_back(i);
        }
        if(v[i]==3)
        {
            v3.push_back(i);
        }


    }
    int c1=0,c2=0,c3=0;
    for(int i=0;i<n;i++)
    {
        if(v[i]==1)c1++;
        if(v[i]==2)c2++;
        if(v[i]==3)c3++;

    }
    int a = min(c1,min(c2,c3));
    cout<<a<<endl;
    for(int i=0;i!=a;i++)
    {
        cout<<v1[i]+1<<" "<<v2[i]+1<<" "<<v3[i]+1<<endl;
    }

    return 0 ;
}
