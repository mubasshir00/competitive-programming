class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int,int>un_map;
  for (int i = 0; i < nums.size(); i++)
  {
    un_map[nums[i]]++;
  }
  int single = 0;
  for(auto i : un_map){
    if(i.second ==1){
      single = i.first;
     break;
    }
  }
        return single;
    }
};
