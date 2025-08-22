class Solution {
public:
    int mySqrt(int x) {
        long long m=1;
       while(m*m <= x){
        m++;
       }
       return m-1;
    }
};
