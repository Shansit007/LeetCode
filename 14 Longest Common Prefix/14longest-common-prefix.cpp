class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.empty()) return "";
        int n= strs.size();
        string temp= strs[0];
        for(int i=1; i<n; i++){
                string temp2 = strs[i];
            int j=0;
            while(j<temp2.size() && j<temp.size()){
                if(temp2[j]==temp[j]){
                     j++;
                }
                else break;
            }
            if(temp.empty()) return "";
            temp= temp.substr(0,j);
        }
        return temp;
    }
};