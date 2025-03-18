class Solution {
public:
    int longestNiceSubarray(vector<int>& nums) {
        int start = 0;
        int end = 0;
        int sum = 0;
        int maxLen = 0;
        while(end < nums.size()){
            if((sum & nums[end]) == 0){
                sum |= nums[end];
                if(end - start + 1 > maxLen)
                    maxLen = end - start + 1;
                end++;
                continue;
            }
            else{
                 while ((sum & nums[end]) != 0) 
                    {sum ^= nums[start];
                start++;}
            }
        }
        return maxLen;
    }
};