//brute force (my approach)
// class Solution {
// public:
//     int kthSmallest(vector<vector<int>>& matrix, int k) {
//         vector<int> temp;       
//         for (auto &row : matrix) {
//             temp.insert(temp.end(), row.begin(), row.end());
//         }       
//         sort(temp.begin(), temp.end());
//         return temp[k-1];
//     }
// };

//optimal
class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        int n = matrix.size();
        int low = matrix[0][0], high = matrix[n-1][n-1];
        
        while (low < high) {
            int mid = low + (high - low) / 2;
            int count = 0, c = n - 1;
            
            // Count elements ≤ mid
            for (int r = 0; r < n; r++) {
                while (c >= 0 && matrix[r][c] > mid) c--;
                count += (c + 1);
            }
            
            if (count < k) low = mid + 1;
            else high = mid;
        }
        return low;
    }
};
