class Solution {
public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(), candidates.end());
        set<vector<int>> ans;
        helper(candidates, 0 ,target, ans,{});
        vector<vector<int>>anss;
        for(vector<int> v : ans){
            anss.push_back(v);
        }
        return anss;
    }
    void helper(vector<int>& candidates, int index,int target, set<vector<int>> &ans, vector<int> curr){
        if(target == 0){
            ans.insert(curr);
        }
        if(target < 0)
            return;
        for(int i = index; i < candidates.size(); i++){
            if (i > index && candidates[i] == candidates[i - 1]) continue;
            curr.push_back(candidates[i]);
            helper(candidates, i + 1, target - candidates[i], ans, curr);
            curr.pop_back();
        }
    }
};