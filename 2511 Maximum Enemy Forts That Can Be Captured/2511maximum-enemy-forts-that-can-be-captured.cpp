class Solution {
public:
    int captureForts(vector<int>& forts) {
        int n= forts.size();
        int count;
        int maxx = 0;

        // Forward direction
        for (int i = 0; i < n; i++) {
            if (forts[i] == 1) { 
                count = 0;
                for (int j = i + 1; j < n; j++) {
                    if (forts[j] == 0) count++;
                    else if (forts[j] == -1){
                        maxx = max(maxx, count);
                        break;
                    }  
                    else break;
                }
            }
        }

        // Backward direction
        for (int i = n-1; i >= 0; i--) {
            if (forts[i] == 1) { 
                count = 0;
                for (int j = i-1; j >= 0; j--) {
                    if (forts[j] == 0) count++;
                    else if (forts[j] == -1){
                        maxx = max(maxx, count);
                        break;
                    }     
                    else break;
                }
            }
        }

        return maxx;
    }
};

//no improvement, only cleaner