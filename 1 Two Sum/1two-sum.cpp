class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int>mpp;
        int n= nums.size();
        for(int i=0; i<n; i++){
            //int a= nums[i];
            int more= target-nums[i]; //target-a
            if(mpp.find(more)!=mpp.end()){
                return {mpp[more],i};
            }
            else mpp[nums[i]]= i; //mpp[a]= i
        }
        return {};
    }
};