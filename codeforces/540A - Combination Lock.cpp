#include<bits/stdc++.h>
using namespace std ;
int main()
{
    int n ;
    cin>>n;
    int sum =0;
        string s1,s2;
        cin>>s1>>s2;
        for(int i=0;i<s1.length();i++)
        {
            int temp1 = abs((s1[i]-'a') - (s2[i]-'a'));
            int temp2 = min((s1[i]-'a'),(s2[i]-'a'));
            int temp3 = max((s1[i]-'a'),(s2[i]-'a'));
            int temp4 = abs((temp2+10)-(temp3));
           // cout<<min(temp1,temp4)<<endl;
            sum=sum+(min(temp1,temp4));
        }
        cout<<sum<<endl;
    return 0;
}
