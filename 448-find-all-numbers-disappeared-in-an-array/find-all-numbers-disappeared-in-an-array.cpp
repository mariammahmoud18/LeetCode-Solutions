class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        set<int> base;
        set<int> com;
        for(int num: nums){
            base.insert(num);
        }
        for(int i = 1; i <= nums.size(); i++){
            com.insert(i);
        }
        vector<int> ans;
        for(auto it : com){
            if(!base.contains(it)){
                ans.push_back(it);
            }
        }
        return ans;
    }
};