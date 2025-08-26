class Solution {
public:
    int jump(vector<int>& nums) {
        int maxx=0;
        int range=0;
        int count=0;
        int i=0;
        while(i<nums.size()-1){
            maxx= max(maxx,i+nums[i]);
            if(i==range){
                count++;
                range= maxx;
            }
            i++;
        }
        return count;
    }
};