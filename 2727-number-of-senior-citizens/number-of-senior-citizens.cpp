

class Solution {
public:
    int countSeniors(std::vector<std::string>& details) {
        int cnt = 0;
        for (std::string s : details) {
            string age_str = "";
            age_str += s[11];
            age_str+=s[12];
            int age = std::stoi(age_str); 
            if (age > 60) {
                cnt++;
            }
        }
        return cnt;
    }
};
