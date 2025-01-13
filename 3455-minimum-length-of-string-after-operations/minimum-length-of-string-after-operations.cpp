class Solution {
public:
    int minimumLength(string s) {
        map<char,int> mp;
        for(char c: s){
            mp[c] = 0;
        }
        for(int i = 0; i < s.length(); i++){
            mp[s[i]]++;
            if(mp[s[i]]>=3)
                mp[s[i]]-=2;
        }

        int cnt = 0;
        for(auto it: mp){
            cnt+=it.second;
        }
        return cnt;
    }

};