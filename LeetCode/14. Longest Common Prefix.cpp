#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    string longestCommonPrefix(vector<string> &strs)
    {
        string res = strs[0];
        for (int z = 1; z < strs.size(); z++)
        {
            int i = 0, j = 0;
            string temp = strs[z];
            while (i < res.length() & j < temp.length())
            {

                if (res[i] != temp[j])
                {
                    break;
                }
                i++;
                j++;
            }
            res = res.substr(0, i);
        }
        return res;
    }
};