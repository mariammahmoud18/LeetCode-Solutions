class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
        int sum = 0;
        int maxSum = 0;
        map<int,int>mp;
        int left = 0;
        int right = 0;
        for(int n : nums){
            mp.insert({n,0});
        }
        while(right < nums.size()){
            mp[nums[right]]++;
            if(mp[nums[right]] > 1){

                while(nums[left] != nums[right])
                {
                    sum-=nums[left];
                    mp[nums[left]]--;
                    left++;
                }
                sum-=nums[left];
                mp[nums[left]]--;
                left++;

            }
            sum+=nums[right];
            if(maxSum < sum)
                    maxSum = sum;
            right++;
            
        }
        return maxSum;
    }
};