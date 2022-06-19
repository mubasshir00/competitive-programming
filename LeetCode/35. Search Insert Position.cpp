class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int temp =0 ;
    if(nums[nums.size()-1]<target){
        return nums.size();
    } else {
    for(int i=0;i<nums.size();i++){
        if(nums[i]>=target){
            return i ;
            return 0 ;
        } else {
            temp = i;
        }

    }
    return  temp ;
    }
    }
};
