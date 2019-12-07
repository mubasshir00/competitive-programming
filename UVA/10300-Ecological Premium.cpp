#include<bits/stdc++.h>
using namespace std ;
int main()
{
    int tc ;
    int n  ;
    double arr1;
    double arr2;
    double arr3;
    cin>>tc;
    while(tc--)
    {
        int n ;
        double sum=0;
        cin>>n;
        while(n--)
        {
            cin>>arr1>>arr2>>arr3;
            sum= sum+ ((arr1/arr2) * arr3 )* arr2;

        }
        cout<<floor(sum)<<endl;
        sum=0;
    }
    return 0;
}
