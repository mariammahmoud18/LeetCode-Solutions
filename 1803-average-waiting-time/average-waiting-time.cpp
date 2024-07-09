class Solution {
public:
    double averageWaitingTime(vector<vector<int>>& customers) {
        int orderStart = customers[0][0];
        int orderEnd = customers[0][1]+customers[0][0];
        double totalWait = orderEnd - orderStart;
        for(int i = 1; i < customers.size(); i++){
            if(customers[i][0] > orderEnd)
                {
                    orderStart = customers[i][0];
                    orderEnd = customers[i][0];
                
                }
                else
            orderStart = orderEnd;
            orderEnd += customers[i][1];
            totalWait += orderEnd - customers[i][0];
            cout<<orderEnd<<endl;
            
        }
        return totalWait/(double)customers.size();
    }
};