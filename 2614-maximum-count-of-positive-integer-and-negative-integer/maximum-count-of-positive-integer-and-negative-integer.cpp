class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int negCount = 0;
        int posCount = 0;
        for(int num: nums){
            if(num>0)
                posCount++;
            else if(num < 0)
                negCount++;
        }
        return max(negCount, posCount);
    }
};