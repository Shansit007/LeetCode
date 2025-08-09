class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count=0;
        int el= nums[0];
        int n= nums.size();
        for(int i=0;i<n; i++){
            if(count==0 && nums[i]!=el){
                el=nums[i];
                count++;
            }
            else if(nums[i]!=el){
                count--;
            }
            else count++;
        }
        return el;
    }
};