class Solution {
public:
    bool isValid(string s) {
        if(s.size()%2 != 0) return false;
        stack<char> st;
        for(char c : s){
            if(c=='(' || c=='[' || c=='{'){
                st.push(c);
            }
            else{
                if(st.empty()) return false;
                else if(c==')' && st.top()=='(') st.pop();
                else if(c==']' && st.top()=='[') st.pop();
                else if(c=='}' && st.top()=='{') st.pop();
                else return false;
            }
        }
        return st.empty(); 
        //asking system that is the string empty, 
        //if yes then 'true' else 'false'
    }
};