class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int sum = 0; 
        for(int n: nums){
            if(to_string(n).length() % 2 == 0 )
                sum++;
        }
        return sum;
    }
};