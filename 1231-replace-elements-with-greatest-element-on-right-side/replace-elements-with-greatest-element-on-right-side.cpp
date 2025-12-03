class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
         int temp = -1;
        for(int i = 0; i < arr.size(); i++){
            temp = -1;
            for(int j = i + 1; j < arr.size(); j++){
                if(temp < arr[j])
                    temp = arr[j];
            }
            if(temp != -1)
            arr[i] = temp;
        }
        arr[arr.size() - 1] = -1;

        return arr;
    }
};