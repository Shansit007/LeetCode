class Solution {
public:
    bool isPalindrome(string s) {
        string fixed = "";

        // Keep only letters and numbers, and convert to lowercase
        for (char c : s) {
            if (isalnum(c)) {
                fixed += tolower(c);
            }
        }
        //palindrome check logic
        int n = fixed.length();
        for (int i = 0; i < n/2; i++) {
            if (fixed[i] != fixed[n - 1 - i]) {
                return false;
            }
        }
        return true;
    }
};
