class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n = nums.size();
        int left = 0;
        long long sum = 0;
        int minn = INT_MAX;

        for (int right = 0; right < n; right++) {
            sum += nums[right];

            while (sum >= target) {
                minn = min(minn, right - left + 1);
                sum -= nums[left];
                left++;
            }
        }

        return (minn == INT_MAX) ? 0 : minn; 
        // (condition) ? value_if_true : value_if_false;
        
        // if (minn == INT_MAX)
        //     return 0;
        // else
        //     return minn;
        
    }
};