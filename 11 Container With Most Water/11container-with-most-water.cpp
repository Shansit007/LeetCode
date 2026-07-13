class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxx = 0;
        int n = height.size();
        int left = 0;
        int right = n-1;
        int area = 0;
        while(left<right){
            area = min(height[left],height[right])*(right-left);
            maxx = max(maxx,area);
            if(height[left]<height[right]) left++;
            else right--;
        }
        return maxx;
    }
};