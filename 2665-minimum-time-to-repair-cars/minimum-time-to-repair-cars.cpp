class Solution {
public:
    long long repairCars(vector<int>& ranks, int cars) {
        sort(ranks.begin(), ranks.end());
        //long long minRank = cars / ranks[0];
        long long start = 1;
        long long end = (long long) cars * cars * ranks[0]; 
        long long best = end; 
        while(start <= end){
            long long mid = start + (end - start) / 2;            
            cout<<mid<<" "<<start<<" "<<end<<endl;
            if(valid(ranks, cars, mid)){
                cout<<"insideeeee"<<endl;
                best = mid; 
                end = mid - 1;

            }
            else
                start = mid + 1;
        }
        return best;
    }
    bool valid(vector<int>& ranks, int cars, long long mid){
        long long sum = 0;
        for(int i = 0; i < ranks.size(); i++){
  if (mid < ranks[i]) continue;  
        sum += sqrt(mid / ranks[i]);   
         if (sum >= cars) return true; 
    }
            return sum >=cars;

    }
};