class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count= 0;
        int n= nums.size();
        int length= 0;
        for(int i=0; i<n; i++){
            if(nums[i]!=1){
                count = 0;
            } 
            else {
                count++;
                length= max(length,count);
            }    
        }
        return length;
    }
};