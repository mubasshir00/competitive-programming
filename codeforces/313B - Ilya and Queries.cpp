#include<bits/stdc++.h>
using namespace std ;
int main()
{
    string s ;
    long long  arr[100000];
    long long   count =0;
    cin>>s;
    for(long long  i=1;i<s.length();i++)
    {
        if(s[i]==s[i-1])
            count++;
            arr[i]=count;

    }
   /* for(int i=0;i<s.length();i++)
    {
        cout<<arr[i]<<" ";
    }*/
    long long  n ,a,b;
    cin>>n;
    while(n--)
    {
        cin>>a>>b;

        cout<<abs(arr[a-1]-arr[b-1])<<endl;


    }

    return 0 ;
}
