class Solution {
public:
    vector<int> closestPrimes(int left, int right) {
        vector<int>ans;
        for(int i = left; i <= right; i++){
            if(isPrime(i))
                ans.push_back(i);
        }
        if(ans.size() <= 1)
            return {-1,-1};
        
        int minDis = 1000000;
        int num1;
        int num2;
        for(int i = 0; i < ans.size() - 1; i++)
        {
            if(ans[i+1]-ans[i] < minDis){
                minDis= ans[i+1]-ans[i];
                num1 = ans[i];
                num2 = ans[i+1];
            }
        }

return {num1,num2};
    }
    bool isPrime(int num){
       if (num < 2) return false;  
    if (num == 2 || num == 3) return true;
    if (num % 2 == 0) return false; 

    for(int i = 3; i <= sqrt(num); i += 2) {
        if(num % i == 0)
            return false;
    }
    return true;
    }
};