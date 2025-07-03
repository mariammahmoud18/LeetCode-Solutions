class Solution {
public:
    char kthCharacter(int k) {
        string word = "a";
        while(word.length() < k){
            string temp = "";
            for(int i = 0; i < word.length(); i++){
                temp+=word[i]+1%26;
            }
            word+=temp;
        }
        return word[k-1];
    }
};