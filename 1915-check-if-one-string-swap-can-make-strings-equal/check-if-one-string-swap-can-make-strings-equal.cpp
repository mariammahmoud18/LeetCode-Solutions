class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {
        vector<char>s;
        for(int i = 0; i < s1.length(); i++){
            if(s1[i]!= s2[i])
                {
                    s.push_back(s1[i]);
                    s.push_back(s2[i]);
                   
                }
        }
        if(s.size() == 0)
        return true;
        else 
        return (s.size() == 4 && s[0] == s[3] && s[1] == s[2]) ? true : false;
    }
};