#include <algorithm>
class Solution {
public:
    int maximumCandies(vector<int>& candies, long long k) {
        int start = 0;
        int maxCandies = 0;
        for(int i = 0; i < candies.size(); i++){
            maxCandies = std::max(candies[i], maxCandies);
        }
        while(start < maxCandies){
            int mid = (start + maxCandies + 1) / 2;
            if(valid(candies, k, mid)){
                start = mid ;
            }
            else{
                maxCandies = mid - 1;
            }
        }
        return start;
    }

    bool valid(vector<int>& candies, long long k,
                            int num){

                        long long maxChildren = 0;
                        for(int i = 0; i < candies.size(); i++){
                            maxChildren+= candies[i] / num;
                        }
                        return maxChildren >= k;
                            }
};