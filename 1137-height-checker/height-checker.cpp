class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int> diff = heights;
        sort(diff.begin(), diff.end());
        int cnt=0;
        for(int i = 0; i < heights.size(); i++){
            if(heights[i] != diff[i])
                cnt++;
        }
        return cnt;
    }
};