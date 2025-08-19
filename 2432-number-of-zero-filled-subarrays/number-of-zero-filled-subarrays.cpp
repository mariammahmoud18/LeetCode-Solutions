class Solution {
public:
    long long zeroFilledSubarray(vector<int>& nums) {
       long long left = 0; 
long long right = 0;
long long cnt = 0;

while (right < nums.size()) {

    if (nums[right] != 0 && nums[left] == 0) {
        cnt += (((right - left + 1) * (right - left)) / 2);
        right++;
        left = right;
    }
    else if (nums[right] != 0 && nums[left] != 0) {
        right++;
        left = right;
    }
    else {
        right++;
    }
}
if(left != nums.size() && nums[left] == 0){
     cnt += (((right - left + 1) * (right - left)) / 2);
}

return cnt;
    }
};