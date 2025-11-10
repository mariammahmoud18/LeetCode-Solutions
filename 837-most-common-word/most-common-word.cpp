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
                paragraph[i] == '?' || paragraph[i] == ';' || paragraph[i] == '\'') {
                    if(temp == "" || temp == " ")
                        continue;
                    cout<<"hmmm: "<<temp<<endl;

                mp[temp]++;
                temp = "";
            } else
                temp += paragraph[i];
        }
        if (temp != "" && temp != " " && temp != "," && temp != "." && temp != "!" &&
            temp != "?" && temp != ":") {
            mp[temp]++;
            cout << "inside" << endl;
        }
        cout << temp << endl;
        int maxi = -1;
        string ans = "";
        for (auto it : mp) {
            cout << "here: " << it.first << endl;
            cout<<(it.second > maxi);
            if (it.second > maxi && std::find(banned.begin(), banned.end(),
                                              it.first) == banned.end()) {
                                                cout<<"weeee"<<endl;
                maxi = it.second;
                ans = it.first;
            }
        }
        return ans;
    }
};