//cleaner submission(same as mine, no changes but cleaner in looks)
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int profit = 0;
        int max_profit = 0;
        int buy = prices[0];

        for(int i = 0; i < n; i++) {
            profit = prices[i] - buy;
            max_profit = max(max_profit, profit);

            if(prices[i] < buy) {
                buy = prices[i];
            }
        }
        return max_profit;  
    }
};
