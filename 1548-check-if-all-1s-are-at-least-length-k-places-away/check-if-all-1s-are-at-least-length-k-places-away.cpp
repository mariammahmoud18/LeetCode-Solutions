class Solution {
public:
    bool kLengthApart(vector<int>& nums, int k) {
        int cnt = -1;
        int start = 0;
        int end = nums.size() - 1;
        bool one = false;
        while (start <= end) {
            if (nums[start] == 1) {
                if (one) {
                    cout<<cnt<<endl;
                    one = false;
                    if (cnt < k)
                        return false;
                    else
                        cnt = -1;
                }
                one = true;
            }
            if (one) {
                cnt++;
            }
            start++;
        }
        return true;
    }
};