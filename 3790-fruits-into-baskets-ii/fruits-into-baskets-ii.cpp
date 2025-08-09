class Solution {
public:
    int numOfUnplacedFruits(vector<int>& fruits, vector<int>& baskets) {
        int rem = fruits.size();
        unordered_map<int,int>b;
        for(int n : baskets){
            b.insert({n,0});
        }
        for(int i = 0; i < fruits.size(); i++){
            for(int j = 0; j < baskets.size(); j++){
                if(b[j] == 0 && fruits[i] <= baskets[j])
                {
                    rem--;
                    b[j] = 1;
                    break;
                }
            }
        }
        return rem;
    }
};