class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_map<int,int>un_map;
  for (int i = 0; i < nums.size(); i++)
  {
    un_map[nums[i]]++;
  }
  int ans = 0;
  for(auto i : un_map){
    if(i.second >1){
     ans =  i.first;
        break;
    }
  }
    return ans ;
    }
};
