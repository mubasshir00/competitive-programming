#include<bits/stdc++.h>
using namespace std ;
int main()
{

  long long n;
  cin>>n;
  long long arr[n];
  for(int i=0;i<n;i++)
  {
      cin>>arr[i];
  }
  int ans =0;
  for(int i=0;i<n;i++)
  {
      if((arr[0]%2==0 and arr[1]%2==0) ||(arr[2]%2==0 and arr[3]%2==0))
      {
          if(arr[i]%2==1)
          {
              ans = i;
          }
      }
      if((arr[0]%2==1 and arr[1]%2==1)||(arr[2]%2==1 and arr[3]%2==1))
      {
          if(arr[i]%2==0)
          {
              ans = i;
          }
      }


  }
  cout<<ans+1<<endl;

    return 0 ;
}
