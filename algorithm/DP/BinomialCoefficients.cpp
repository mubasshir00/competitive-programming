#include <bits/stdc++.h>
using namespace std;
int binonalCoff(int n, int k)
{
    if (k > n)
    {
        return 0;
    }
    if (k == 0)
    {
        return 1;
    }
    if (n == k)
    {
        return 1;
    }
    return binonalCoff(n - 1, k - 1) + binonalCoff(n - 1, k);
}
int main()
{

    cout << binonalCoff(7, 4) << endl;
    return 0;
}