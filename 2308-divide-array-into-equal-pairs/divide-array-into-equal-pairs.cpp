class Solution {
public:
    bool divideArray(vector<int>& nums) {
        int numOfPairs = nums.size() / 2;
        map<int,int>mp;
        for(int num : nums){
            mp[num]++;
        }
        for(auto it : mp){
            if(it.second % 2 != 0)
                return false;
        }
        return true;
    }
};