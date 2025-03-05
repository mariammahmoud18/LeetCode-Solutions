class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> ans(n*2, 0);
        int in=0;
        for(int i = 0; i < n; i++){
            ans[in] = nums[i];
            ans[in+1] = nums[i+n];
            in+=2;

        }
        return ans;
    }
};