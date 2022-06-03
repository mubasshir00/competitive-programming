#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        unordered_set<int> s;
        vector<int> ans;
        int j = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            int temp = target - nums[i];
            // int tempInd = i ;
            if (s.find(temp) != s.end())
            {
                // cout<<i<<" ";
                ans.push_back(i);
                for (int j = 0; j < nums.size(); j++)
                {
                    if (temp == nums[j])
                    {
                        // cout<<j<<endl;
                        ans.push_back(j);
                        break;
                    }
                }
            }
            s.insert(nums[i]);
        }
        return ans;
    }
};