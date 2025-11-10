class Solution {
public:
    string mostCommonWord(string paragraph, vector<string>& banned) {
        std::transform(paragraph.begin(), paragraph.end(), paragraph.begin(),
                       ::tolower);
        map<string, int> mp;
        string temp = "";
        for (int i = 0; i < paragraph.length(); i++) {
            if (paragraph[i] == ' ' || paragraph[i] == ',' ||
                paragraph[i] == '.' || paragraph[i] == '!' ||
                paragraph[i] == '?' || paragraph[i] == ';' ||
                paragraph[i] == '\'') {
                if (temp == "" || temp == " ")
                    continue;

                mp[temp]++;
                temp = "";
            } else
                temp += paragraph[i];
        }
        if (temp != "" && temp != " " && temp != "," && temp != "." &&
            temp != "!" && temp != "?" && temp != ":") {
            mp[temp]++;
        }
        int maxi = -1;
        string ans = "";
        for (auto it : mp) {
            if (it.second > maxi && std::find(banned.begin(), banned.end(),
                                              it.first) == banned.end()) {
                maxi = it.second;
                ans = it.first;
            }
        }
        return ans;
    }
};