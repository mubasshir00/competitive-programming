#include <bits/stdc++.h>
using namespace std;

// A function to print all prime
// factors of a given number n
set<int>s;
int primeFactors(int n)
{
    // Print the number of 2s that divide n
    while (n % 2 == 0)
    {
        //cout << 2 << " ";
        s.insert(2);
        n = n/2;
    }

    // n must be odd at this point. So we can skip
    // one element (Note i = i +2)
    for (int i = 3; i <= sqrt(n); i = i + 2)
    {
        // While i divides n, print i and divide n
        while (n % i == 0)
        {
           // cout << i << " ";
           s.insert(i);
            n = n/i;
        }
    }

    // This condition is to handle the case when n
    // is a prime number greater than 2
    if (n > 2)
    {
        s.insert(n);
    }
        //cout << n << " ";
}

/* Driver code */
int main()
{
    int m ;
    cin>>m;
    int count=0;
     for(int i=1;i<=m;i++)
     {
         primeFactors(i);

         if(s.size()==2)
         {
             count++;
         }
         s.clear();

     }
     cout<<count<<endl;
     count =0;

    return 0;
}
