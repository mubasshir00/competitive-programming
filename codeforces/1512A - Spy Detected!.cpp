#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        vector<int> v;
        int n;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            v.push_back(x);
        }
        int x = v[0];
        if (v[0] != v[1] && v[0] != v[2])
        {
            cout << 1 << endl;
        }
        else
        {
            for (int i = 1; i <= v.size(); i++)
            {
                if (x != v[i])
                {
                    cout << i + 1 << endl;
                    break;
                }
            }
        }
    }
    return 0;
}