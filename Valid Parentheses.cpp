class Solution {
public:
    bool isValid(string s) {
        bool ans = true;
        stack<char> st;
        for(int i=0; i<s.size(); i++){
            if(s[i]=='(' || s[i]=='{' || s[i]=='['){
                st.push(s[i]);
            }
            else{
                if(st.empty()==true){
                    return false;
                }
                else if((s[i]=='}' && st.top()=='{') || (s[i]==']' && st.top()=='[') ||                                     (s[i]==')' && st.top()=='(')){
                    st.pop();
                }
                else{
                    return false;
                }
            }
        }
        if(st.empty() == false)ans = false;
        return ans;
    }
};