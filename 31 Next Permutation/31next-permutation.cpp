class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n= nums.size();
        int breakpoint = -1;
        for(int i=n-2; i>=0; i--){
            if(nums[i]<nums[i+1]){
                breakpoint = i;
                break;
            }
        }
        if(breakpoint == -1) { //max permutation achieved
            reverse(nums.begin(), nums.end());
            return;
        }
        for(int i=n-1; i>breakpoint; i--){
            if(nums[i]>nums[breakpoint]){
                swap(nums[breakpoint],nums[i]);
                break;
            }
        }
        reverse(nums.begin() + breakpoint + 1,nums.end());
    }
};