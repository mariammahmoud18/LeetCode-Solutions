class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int end = arr[arr.size()-1] + k;
        set<int> s;
        vector<int>ans;
        for(int num: arr){
            s.insert(num);
        }
        for(int i = 1; i <= end; i++){
            if(s.count(i)==0)
            ans.push_back(i);

        }
        return ans[k-1];
    }
};