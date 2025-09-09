class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int, int> mp; // store next greater for each number
        stack<int> st;

        // Traverse nums2 from right to left
        for (int i = nums2.size() - 1; i >= 0; i--) {
            while (!st.empty() && st.top() <= nums2[i]) {
                st.pop();  // remove smaller/equal elements
            }
            // If stack empty → no greater element
            mp[nums2[i]] = st.empty() ? -1 : st.top();
            st.push(nums2[i]);
        }

        // Build result for nums1
        vector<int> ans;
        for (int x : nums1) {
            ans.push_back(mp[x]);
        }
        return ans;
    }
};
