class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        vector<string> ans;
        if(nums.size() == 1)
            {
                ans.push_back(to_string(nums[0]));
                return ans;
            }
        string s = "";
        bool start = false;
        for(int i = 0; i < nums.size(); i++){
            if(i < nums.size() - 1 && nums[i] + 1 == nums[i+1]) {
                if(start == false){
                    start = true;
                    s+= to_string(nums[i]);
                }
            }
            else{
                if(start){
                    s+="->";
                    s+=to_string(nums[i]);
                    start = false;
                    ans.push_back(s);
                    s = "";
                }
                else{
                    s=to_string(nums[i]);
                    ans.push_back(s);
                    s = "";
                }
            }
        }
        return ans;
    }
};