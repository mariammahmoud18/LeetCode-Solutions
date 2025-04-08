class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int sum = 0;
        int maxCnt =1000000 ;
        int start = 0;
        int end = 0;
        while(end < nums.size()){
            cout<<nums[start]<<" "<<nums[end]<<" "<<sum<<endl;
                sum+=nums[end];

                while(sum>=target){
                    maxCnt = min(maxCnt, end-start+1);
                    sum-=nums[start];
                    start++;
                }
                            end++;

        }
        return maxCnt == 1000000 ? 0 : maxCnt ;
    }
};