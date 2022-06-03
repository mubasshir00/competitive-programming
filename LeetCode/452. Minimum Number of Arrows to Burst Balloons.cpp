//be careful kid . try to sort vector via using reference . otherwise it will waste your time 

#include<bits/stdc++.h>
using namespace std ;

class Solution
{
public:
    int findMinArrowShots(vector<vector<int>> &points)
    {
        sort(points.begin(), points.end(), sortBySec);
        int z = points[0][1];
        int ans = 1;
        for (int i = 1; i < points.size(); i++)
        {
            if (points[i][0] > z)
            {
                ans++;
                z = points[i][1];
            }
        }
        return ans;
    }

private:
    static bool sortBySec(vector<int> &v1, vector<int> &v2)
    {
        return v1[1] < v2[1];
    }
};

