class Solution {
public:
    int areaOfMaxDiagonal(vector<vector<int>>& dimensions) {
        int maxArea = 0;
        int maxDiagonal = 0;
        for(vector<int> v : dimensions){
            double op = pow(v[0],2) + pow(v[1],2);
            cout<<op<<endl;
            if( op > maxDiagonal){
                maxDiagonal = op;
                maxArea = v[0] * v[1];
            }
            else if (op == maxDiagonal){
                                maxArea = max(maxArea,v[0] * v[1]);

            }
        }
        return maxArea;
    }
};