#include<bits/stdc++.h>
using namespace std ;
bool isPowerOfTwo(long long x)
{
    if(x == 0)
        return false;
    else
    {
        while(x % 2 == 0) x /= 2;
        return (x == 1);
        }
}
int main()
{
  long long  n ;
    cin>>n;
    if(isPowerOfTwo(n))
        {
            cout<<"TAK"<<endl;
        }
        else
        {
            cout<<"NIE"<<endl;
        }
    return 0 ;
}

---------------------------------------------------
https://www.hackerearth.com/practice/notes/bit-manipulation/
-----------------------------------------------------
/*
tutorial - 
1) How to check if a given number is a power of 2 ?
Consider a number N and you need to find if N is a power of 2. Simple solution to this problem is to repeated divide N by 2 if N is even. If we end up with a 1 then N is power of 2, otherwise not. There are a special case also. If N = 0 then it is not a power of 2. Let’s code it.

Implementation:

bool isPowerOfTwo(int x)
{
    if(x == 0)
        return false;
    else
    {
        while(x % 2 == 0) x /= 2;
        return (x == 1);
        }
}
Above function will return true if x is a power of 2, otherwise false.
Time complexity of the above code is O(logN).

The same problem can be solved using bit manipulation. Consider a number x that we need to check for being a power for 2. Now think about the binary representation of (x-1). (x-1) will have all the bits same as x, except for the rightmost 1 in x and all the bits to the right of the rightmost 1. 
Let, x = 4 = (100)2
x - 1 = 3 = (011)2
Let, x = 6 = (110)2 
x - 1 = 5 = (101)2

It might not seem obvious with these examples, but binary representation of (x-1) can be obtained by simply flipping all the bits to the right of rightmost 1 in x and also including the rightmost 1.

Now think about x & (x-1). x & (x-1) will have all the bits equal to the x except for the rightmost 1 in x.
Let, x = 4 = (100)2
x - 1 = 3 = (011)2 
x & (x-1) = 4 & 3 = (100)2 & (011)2 = (000)2 
Let, x = 6 = (110)2 
x - 1 = 5 = (101)2 
x & (x-1) = 6 & 5 = (110)2 & (101)2 = (100)2

Properties for numbers which are powers of 2, is that they have one and only one bit set in their binary representation. If the number is neither zero nor a power of two, it will have 1 in more than one place. So if x is a power of 2 then x & (x-1) will be 0.

*/
