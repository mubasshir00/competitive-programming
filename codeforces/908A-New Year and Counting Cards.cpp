#include<bits/stdc++.h>
using namespace std ;
int main()
{
    string a ;
    int count =0;
    cin>>a;
    int len = a.length();
    for(int i=0;i<len;i++)
    {
        if(a[i]=='a' || a[i]=='e' || a[i] == 'i' || a[i] =='o' || a[i]=='u'
           ||a[i]=='1'  ||a[i]=='3' ||a[i]=='5' || a[i] == '7' || a[i] =='9'
           )
        {
            count++;
        }
    }
    cout<<count<<endl;
    return 0 ;
}
