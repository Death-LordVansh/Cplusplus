class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
         for(int i=0;i<nums.size();i++){
            for(int j=0;j<(nums.size());j++){
                if(nums[i]+nums[j]==target && i!=j){
                    vector<int> a={i,j};
                    return a;
                }
            }
        }
        return {0};
    }
};