#include<bits/stdc++.h>
using namespace std ;
int main()
{
    int a[10000];
    //int b[10000];
    int n ;
    while(scanf("%d",&n)==1){
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int c=0;
    for(int i=0;i<n;i++)
    for(int j=i+1;j<n;j++)
        if(a[i]>a[j])
        {
            c++;
        }

     cout<<"Minimum exchange operations : ";
    cout<<c<<endl;
    }
    return 0;
}
