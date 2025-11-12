class Solution {
public:
    string getHint(string secret, string guess) {
        int bulls = 0;
        int cows = 0;
        map<char, int> bullSet;
        map<char, int> base;
        map<char, int> clone;
        for (int i = 0; i < guess.length(); i++) {
            if (secret[i] == guess[i]) {
                bulls++;
                bullSet[secret[i]]++;
            }
            base[secret[i]]++;
            clone[guess[i]]++;
        }
        for (auto it : base) {
            if (clone.contains(it.first) && !bullSet.contains(it.first)) {
                cows += min(it.second, clone[it.first]);
            } else if (clone.contains(it.first) && bullSet.contains(it.first)) {
                cows += abs((min(it.second, clone[it.first])) - bullSet[it.first]);
            }
        }
        string ans = to_string(bulls) + 'A' + to_string(cows) + 'B';
        return ans;
    }
};