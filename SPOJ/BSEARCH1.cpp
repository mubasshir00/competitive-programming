#include<bits/stdc++.h>
using namespace std ;

long long int  binarySearch(long long int a[],long long int low,long long int high,long long int key)
{
   while(low<=high)
   {
     long long int mid=(low+high)/2;
     if(a[mid]<key)
     {
         low=mid+1;
     }
     else if(a[mid]>key)
     {
         high=mid-1;
     }
     else
     {
         return mid;
     }
   }
   return -1;
 }
int main()
{
    vector<int>v;
    vector< int>::iterator it;
     int n,m;
    scanf("%d%d",&n,&m);

    for(int i=0;i<n;i++)
    {
       int x ;
      scanf("%d",&x);
       v.push_back(x);
    }
    while(m--)
    {
       int q;
        scanf("%d",&q);
        if(binary_search(v.begin(),v.end(),q))
        {
            it = std::lower_bound(v.begin(),v.end(),q);
            printf("%d\n" ,it-v.begin());
        }
        else cout<<"-1"<<endl;
    }
    return 0;
}
