class Solution {
public:
    int appendCharacters(string s, string t) {
        int first = 0;
        for(int i = 0; i < s.length(); i++){
            if(first != t.length() && s[i] == t[first])
                first++;
        }
        return t.length() - first;
    }
};