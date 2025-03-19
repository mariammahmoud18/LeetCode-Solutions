class Solution {
public:
    int minOperations(vector<int>& nums) {
        int cnt= 0;
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] == 0){
                if (i + 2 >= nums.size()) {
                    return -1;
                }
                
                for (int j = i; j < i + 3; j++) {
                    nums[j] ^= 1;  
                }
                
                cnt++;  
            }
        }
        for(int i = 0; i < nums.size(); i++)
            {
                if(nums[i] == 0)
                    return -1;
            }

        return cnt;
    
    }
};