class Solution {
public:
    int nearestValidPoint(int x, int y, vector<vector<int>>& points) {
        int mindis = 100000;
        int dis;
        int id = 0;
        int ansId=-1;
        for(vector<int> v: points){
            if(v[0]==x || v[1] == y){
                dis=abs(v[0]-x) + abs(v[1]-y);
                if(mindis>dis)
                    {
                        mindis=dis;
                        ansId = id;
                        
                    }
            }
            id++;
        }
        return ansId;
    }
};