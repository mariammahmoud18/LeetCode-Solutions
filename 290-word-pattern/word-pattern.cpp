class Solution {
public:
    bool wordPattern(string pattern, string s) {
        map<char, string> mp;
        vector<string> strVec;
        set<string> st;
        string temp = "";
        for (int i = 0; i < s.length(); i++) {
            if (s[i] == ' ') {
                strVec.push_back(temp);
                st.insert(temp);
                temp = "";
            } else
                temp += s[i];
        }
        st.insert(temp);
        strVec.push_back(temp);

        if (pattern.length() != strVec.size())
            return false;
        for (int i = 0; i < pattern.length(); i++) {
            if (mp.contains(pattern[i]) && mp[pattern[i]] != strVec[i])
                return false;
            else
                mp[pattern[i]] = strVec[i];
        }
        if(st.size() == mp.size())
        return true;
        else
        return false;
    }
};