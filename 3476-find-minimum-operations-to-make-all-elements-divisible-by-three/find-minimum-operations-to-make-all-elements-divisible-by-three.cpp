class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        int cnt = 0;
        for(int num : nums){
            if( (num + 1) % 3 == 0 || (num - 1) % 3 == 0)
                cnt++;
        }
        return cnt;
    }
};