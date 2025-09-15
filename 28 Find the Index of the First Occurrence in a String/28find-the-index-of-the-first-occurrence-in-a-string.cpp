class Solution {
public:
    int strStr(string haystack, string needle) {
        int n = haystack.size();
        int m = needle.size();

        if (m == 0) return 0;

        int c = 0;
        while (c<n){
            if (haystack[c] == needle[0]){
                int ans = c;
                int i = 0;
                while (i<m && haystack[c+i] == needle[i]) {
                    i++;
                }
                if (i == m) return ans; 
            }
            c++;
        }
        return -1;
    }
};
