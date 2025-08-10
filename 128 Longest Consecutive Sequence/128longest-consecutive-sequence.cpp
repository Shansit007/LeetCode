class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        set<int>st;
        int n= nums.size();
        int longest= 0;
        int x;
        for(int i=0; i<n; i++){
            st.insert(nums[i]);
        }
        for(auto it : st){
            if(st.find(it-1)==st.end()){
                int count= 1;
                x = it;
                while(st.find(x+1)!=st.end()){
                    x = x+1;
                    count++;
                }
                longest= max(longest,count);
            }
        }
        return longest;
    }
};