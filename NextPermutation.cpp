class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n = nums.size(), breakPoint, large;
        for(breakPoint=n-2; breakPoint>=0; breakPoint--){
            if(nums[breakPoint] < nums[breakPoint+1])
                break;
        }
        if(breakPoint<0){
            reverse(nums.begin(), nums.end());
        }
        else{
            for(large=n-1; large>breakPoint; large--){
                if(nums[large] > nums[breakPoint]){
                    break;
                }
            }
            swap(nums[breakPoint], nums[large]);
            reverse(nums.begin()+breakPoint+1, nums.end());
        }
    }
};
