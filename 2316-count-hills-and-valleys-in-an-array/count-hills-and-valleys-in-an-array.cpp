class Solution {
public:
    int countHillValley(vector<int>& nums) {
        int cnt = 0;
        for(int i = 1; i < nums.size() - 1; i++){
            cout<<nums[i]<<endl;
            if((nums[i] > nums[i+1] && nums[i] > nums[i-1]) || (nums[i] < nums[i+1] && nums[i] < nums[i-1]))
                {cnt++;
                cout<<"hereee"<<endl;}
            else if(nums[i]==nums[i+1]){
                int temp = i;
                while(temp < nums.size() && nums[temp] == nums[i]){
                    temp++;
                }
                cout<<nums[i]<<" "<<temp<<endl;
                 if((temp < nums.size()) && ((nums[i] > nums[temp] && nums[i] > nums[i-1]) || (nums[i] < nums[temp] && nums[i] < nums[i-1])))
                {
                    cnt++;
                    cout<<"hereeee2"<< " "<<nums[i]<<" "<<nums[temp]<<endl;
                }
                i = temp - 1;
            }
        }
        return cnt;
    }
};