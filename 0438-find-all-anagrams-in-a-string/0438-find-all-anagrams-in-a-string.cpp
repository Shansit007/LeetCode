class Solution {
public:
    vector<int> findAnagrams(string s, string p) {

        vector<int> ans;

        if (p.size() > s.size())
            return ans;

        vector<int> need(26);
        vector<int> window(26);

        for (char c : p)
            need[c - 'a']++;

        int k = p.size();

        // first window
        for (int i = 0; i < k; i++)
            window[s[i] - 'a']++;

        if (window == need)
            ans.push_back(0);

        // slide window
        for (int i = k; i < s.size(); i++) {

            window[s[i - k] - 'a']--;   // remove left character
            window[s[i] - 'a']++;       // add right character

            if (window == need)
                ans.push_back(i - k + 1);
        }

        return ans;
    }
};