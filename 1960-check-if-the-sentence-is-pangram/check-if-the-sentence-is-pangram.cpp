class Solution {
public:
    bool checkIfPangram(string sentence) {
        set<char> s;
        for(char c: sentence){
            s.insert(c);
        }
        if(s.size()== 26)
        return true;
        else return false;

    }
};