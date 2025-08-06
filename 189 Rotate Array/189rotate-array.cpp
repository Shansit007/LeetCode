class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n=nums.size();
        k=k%n;
        int m= 0;
        vector<int>temp;
        for(int i=0; i<nums.size(); i++){
            temp.push_back(nums[i]);
        }
        for(int i=n-k; i<nums.size();i++){
            nums[m]=temp[i];
            m++;
        }
        for(int i=0; i<n-k; i++){
            nums[m]=temp[i];
            m++;
        }
    }
};