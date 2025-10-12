class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        int sum = numBottles;
while (numBottles >= numExchange){
           int newBottles = numBottles / numExchange;
        int rem = numBottles % numExchange;
        sum += newBottles;
        numBottles = newBottles + rem;
           
        }
        return sum;
    }
};