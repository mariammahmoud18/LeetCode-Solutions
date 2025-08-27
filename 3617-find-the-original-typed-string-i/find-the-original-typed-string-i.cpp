class Solution {
public:
    int possibleStringCount(string word) {
        int sum = 0;
        map<char,int>mp;
        /*for(char c : word){
            mp[c]++;
        }
        for(auto it : mp){
            sum+=(it.second - 1);
        }*/

        for(int i = 0; i < word.length(); i++){
            if(word[i] == word[i+1]){
                sum++;
            }
        }
        sum++;
    return sum ;
    }
    
};