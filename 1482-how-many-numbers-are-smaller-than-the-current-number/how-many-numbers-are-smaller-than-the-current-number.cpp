class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int>ans;
        int bigger = 0;
        for(int i = 0; i < nums.size(); i++){
            bigger = 0;
            for(int j = 0; j < nums.size(); j++){
                if(nums[i] > nums[j] && i != j)
                    bigger++;
            }
            ans.push_back(bigger);
        }
        return ans;
    }
};