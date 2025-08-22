class Solution {
public:
    int arrangeCoins(int n) {
        long long x = 1;
        while ((x*(x + 1))/2 <= n){
            x++;
        }
        return x - 1;  
    }
};
