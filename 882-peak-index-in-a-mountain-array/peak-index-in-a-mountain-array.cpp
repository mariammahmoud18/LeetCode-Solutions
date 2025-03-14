class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int left = 0;
        int right = arr.size() - 1;
        while(left <= right){
            int mid = (right + left + 1) / 2;
            cout<<left<<" "<<right<<" " <<mid<<endl;
            if(arr[mid]>arr[mid-1] && arr[mid] > arr[mid+1])
                return mid;
            else if(arr[mid]>arr[mid-1] && arr[mid]<arr[mid+1])
                left = mid + 1;
            else
                right = mid - 1;
        }
        return -1;
    }
};