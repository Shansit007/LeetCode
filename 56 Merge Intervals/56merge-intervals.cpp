class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>> mearged;
        sort(intervals.begin(),intervals.end());
        for(auto interval : intervals){
            if(mearged.empty() || mearged.back()[1]<interval[0]){
                mearged.push_back(interval);
            }
            else{
                mearged.back()[1]= max(mearged.back()[1],interval[1]);
            }
        }
        return mearged;
    }
};