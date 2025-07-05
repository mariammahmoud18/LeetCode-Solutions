class Solution {
public:
    int findLucky(vector<int>& arr) {
        int maxNumber = -1;
        map<int,int>mp;
        for(int num: arr){
            mp[num]++;
        }
        for(auto it: mp){
            if(it.second == it.first && it.first > maxNumber){
                maxNumber = it.first;
            }
        }
        return maxNumber;
    }
};