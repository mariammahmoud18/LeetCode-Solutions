class Solution {
public:
    vector<string> divideString(string s, int k, char fill) {
        int temp = k;
        vector<string> ans;
        string str = "";
        for(int i = 0; i < s.length(); i++){
            if(temp == 0){
                ans.push_back(str);
                temp = k;
                str = "";
            }
            str+=s[i];
            temp--;
                
        }
        while(temp--){
            str+=fill;
        }
        ans.push_back(str);
        return ans;
    }
};