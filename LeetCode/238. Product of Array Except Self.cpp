class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
    int n = nums.size();
    vector<int>lefts(n);
    vector<int>rights(n);
    vector<int>outputs(n);
    lefts[0] = 1;
    for(int i=1;i<n;i++){
        lefts[i] = lefts[i-1]*nums[i-1];
    }
    rights[n-1]=1;
    for(int j=n-2;j>=0;j--){
        rights[j] = rights[j+1]*nums[j+1];
    }
    for(int i=0;i<n;i++){
        outputs[i] = lefts[i]*rights[i];
    }
    return outputs;
    }
};
