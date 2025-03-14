class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        map<int,int> s;
        for(int n : arr){
            s[n]++;
        }
        if (s[0] > 1) 
            return true;
        for(int i = 0; i < arr.size(); i++){
            if(s.count(arr[i]*2)!=0 && arr[i] != 0)
                return true;
        }
        return false;
    }
};