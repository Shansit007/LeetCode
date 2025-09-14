class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int n= nums.size();
        vector<int> temp(2,0);
        vector<int> freq(n+1,0);
        for(int i=0; i<n; i++){
            freq[nums[i]]++;
        }
        for(int i=1; i<=n; i++){
            if(freq[i]==2) temp[0]=i;
            if(freq[i]==0) temp[1]=i;
        }
        return temp;
    }
};