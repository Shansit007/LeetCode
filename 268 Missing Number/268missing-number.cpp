class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n= nums.size();
        vector<int>temp;
        for(int i=0; i<=n; i++){
            temp.push_back(i);
        }
        for(int i=0; i<=n;i++){
            int count= 0;
            for(int j=0;j<nums.size();j++){
                if(temp[i]==nums[j]){
                    count++;
                } 
            }
            if(count==0) return i;
        }
        return 0;
    }
};