class Solution {
public:
    string clearDigits(string s) {
        stack<char>st;
        for(char c: s){
            if(c>=48 && c<=57)
                st.pop();
            else
                st.push(c);
        }
        string temp = "";
        while(!st.empty()){
            temp+=st.top();
            st.pop();
        }
        reverse(temp.begin(), temp.end());
        return temp;
    }
};