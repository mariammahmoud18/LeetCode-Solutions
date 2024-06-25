class Solution {
public:
    string removeStars(string s) {
        stack<char> st;
        for(char c: s){
            if(c == '*')
                st.pop();
            else
                st.push(c);
        }
        int n = st.size();
        string ans = "";
        for(int i = 0; i < n; i++){
           ans+=st.top();
            st.pop();
        }
            reverse(ans.begin(), ans.end());

        return ans;
    }
};