// class Solution {
// public:
//     string minWindow(string s, string t) {
//         int n = s.size();
//         int m = t.size();
//         string ans;
//         int minn = INT_MAX;
//         for (int i = 0; i < n; i++) {
//             for (int j = i; j < n; j++) {
//                 string sub= s.substr(i, j-i+1);
//                 if(containsAll(sub,t)){
//                     if(j-i+1<minn){
//                         minn= j-i+1;
//                         ans = sub;
//                     }
//                 }
//             }
//         }
//         return ans;
//     }
//     bool containsAll(string sub, string t){
//         vector<int>freqT(128,0);
//         vector<int>freqS(128,0);
//         for(char c : t){
//             freqT[c]++;
//         }
//         for(char c : sub){
//             freqS[c]++;
//         }
//         for(char c : t){
//             if(freqS[c] < freqT[c]) return false;
//         }
//         return true;
//     }
// };

// Brute Force
// 225 / 268 testcases passed (Time Limit Exceeded O(n^3))

//Sliding window optimal using tow pointers O(n)
//copied
class Solution {
public:
    string minWindow(string s, string t) {
        vector<int> freqT(128, 0), freqS(128, 0);

        // count frequency of t
        for (char c : t) freqT[c]++;

        int left = 0, count = 0;
        int minLen = INT_MAX, start = 0;

        // expand window
        for (int right = 0; right < s.size(); right++) {
            char c = s[right];
            freqS[c]++;

            // useful char
            if (freqS[c] <= freqT[c]) count++;

            // shrink window from left when all chars matched
            while (count == t.size()) {
                if (right - left + 1 < minLen) {
                    minLen = right - left + 1;
                    start = left;
                }
                // shrink
                freqS[s[left]]--;
                if (freqS[s[left]] < freqT[s[left]]) count--;
                left++;
            }
        }

        return (minLen == INT_MAX) ? "" : s.substr(start, minLen);
    }
};
