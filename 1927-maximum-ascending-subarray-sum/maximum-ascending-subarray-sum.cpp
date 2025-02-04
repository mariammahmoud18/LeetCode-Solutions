class Solution {
public:
    int maxAscendingSum(vector<int>& nums) {
        int maxi = nums[0];
        int ans = -1;
        int left = 0;
        int right = 1;
        while(left < right && right < nums.size()){
            cout<<maxi<<endl;
            if(nums[right-1]<nums[right])
            maxi+=nums[right];
            else{
                if(ans < maxi)
                ans=maxi;
                maxi=nums[right];
                while(left != right)
                    left++;
            }
            right++;
        }
        if(ans < maxi)
            ans=maxi;
        return ans;
    }
};