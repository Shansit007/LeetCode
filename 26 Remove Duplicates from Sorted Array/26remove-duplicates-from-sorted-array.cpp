class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int k= nums.size();
        int index = 1;
        vector<int>temp;
        for(int i=0;i<k;i++){
            temp.push_back(nums[i]);
        }
        for(int i = 1;i<k;i++){
            if(nums[i]!=nums[i-1]){
            nums[index]=temp[i];
            index++;
            }
        } 
        return index;
    }
};