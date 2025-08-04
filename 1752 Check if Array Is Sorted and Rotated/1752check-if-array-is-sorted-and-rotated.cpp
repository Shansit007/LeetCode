class Solution {
public:
    bool check(vector<int>& nums) {
        /*int n = nums.size();
        for(int i = 1; i<n; i++){
            if(nums[i]>nums[i-1]) return true;
            else return false;
        }
        return 0;*/
        // 62nd test case fails fuck

        int n = nums.size();
        int breaks = 0;

        for (int i = 0; i < n; i++) {
            if (nums[i] > nums[(i + 1) % n]) {
                breaks++;
                if (breaks > 1) return false;
            }
        }
        return true;
    }
};
