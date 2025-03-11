class Solution {
public:
    int numberOfSubstrings(string s) {
        int left = 0;
        int right  = 0;
        int size = s.length() - 1;
        int ans = 0; 
        map<char,int>mp;
        while(right < s.length()){
            mp[s[right]]++;
            while(mp['a'] > 0 && mp['b'] > 0 && mp['c'] > 0){
                ans++;
                ans += (size-right);
                mp[s[left]]--;
                left++;
            }
            right++;
        }
        return ans;
    }
};