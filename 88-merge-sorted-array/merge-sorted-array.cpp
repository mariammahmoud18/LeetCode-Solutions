class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int> temp;
        int limit1 = 0;
        int limit2 = 0;
        while(m || n){
            if(m && n && nums1[limit1] < nums2[limit2]){
                temp.push_back(nums1[limit1]);
                limit1++;
                m--;
            }
            else if (m && n && nums1[limit1] >= nums2[limit2]){
                temp.push_back(nums2[limit2]);
                limit2++;
                n--;
            }
            else if(n && !m){
                temp.push_back(nums2[limit2]);
                limit2++;
                n--;
            }
            else if(m && !n){
                temp.push_back(nums1[limit1]);
                limit1++;
                m--;
            }
        }
        for(int i = 0; i < limit1+limit2; i++){
            nums1[i]=temp[i];
        }
        }
};