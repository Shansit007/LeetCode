class Solution {
public:
    bool isPalindrome(int x) {
        //if(x<0) return false;
        int dup = x;
        int rev = 0;
        while(x>0){
            int lastdigit = x%10;
            x /= 10;
            if (rev > INT_MAX / 10 || (rev == INT_MAX / 10 
            && lastdigit > 7)) return false;
                
            rev = rev*10+lastdigit;
        }
        //return rev == dup;
        if(rev == dup) return true;
        else return false;
    }
};