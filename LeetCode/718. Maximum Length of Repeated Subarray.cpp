#include <bits/stdc++.h>
using namespace std;
void find_longest_common_substring(vector<int> nums1, vector<int> nums2)
{
    int nums1_length = nums1.size();
    int nums2_length = nums2.size();
    int temp_arr[nums1_length + 2][nums2_length + 2];
    memset(temp_arr, 0, sizeof(temp_arr));
    int max_len = 0;
    for (int i = 1; i <= nums1_length; i++)
    {
        for (int j = 1; j <= nums2_length; j++)
        {
            if (nums1[i - 1] == nums2[j - 1])
            {
                temp_arr[i][j] = temp_arr[i - 1][j - 1] + 1;
                // cout<<temp_arr[i][j]<<endl;
                if (temp_arr[i][j] > max_len)
                {
                    max_len = temp_arr[i][j];
                }
            }
        }
    }
    cout << max_len << endl;
}
int main()
{
    vector<int> nums1;
    vector<int> nums2;
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        nums1.push_back(x);
    }
    for (int j = 0; j < m; j++)
    {
        int y;
        cin >> y;
        nums2.push_back(y);
    }
    find_longest_common_substring(nums1, nums2);
    return 0;
}