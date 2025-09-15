class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n = nums.size();
        int farthest = 0;  // track maximum reachable index
        for (int i = 0; i < n; i++) {
            if (i > farthest) return false; // cannot even reach this point
            int jump = nums[i];
            farthest = max(farthest, i + jump);
            if (farthest >= n - 1) return true; // can reach or cross last index
        }
        return true;
    }
};
