class Solution {
public:
    int countMatches(vector<vector<string>>& items, string ruleKey, string ruleValue) {
        int choice;
        if(ruleKey == "color")
            choice = 1;
        else if (ruleKey == "type")
            choice = 0;
        else
            choice = 2;
        
        int cnt=0;
        for(vector<string> v: items){
            if(v[choice] == ruleValue)
                cnt++;
        }
        return cnt;
    }
};