class Solution {
public:
    int findFinalValue(vector<int>& nums, int original) {
        set<int> s;
        for(int num : nums){
            s.insert(num);
        }
       while(s.contains(original)){
                original *= 2;
            
        }
        return original;
    }
};