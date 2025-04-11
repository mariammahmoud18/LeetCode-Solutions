#include <string>

class Solution {
public:
    int countSymmetricIntegers(int low, int high) {
        int cnt = 0;
        for(int i = low; i <= high; i++){
            cnt+=helper(i);
        }
        return cnt;
    }
    bool helper(int num){
        int len = to_string(num).length();
        if(len%2!=0)
            return 0;
        string number = to_string(num);
        int cnt1=0;
        int cnt2=0;
        for(int i = 0; i < len/2; i++){
            cnt1+=(number[i]-'0');
        }
        for(int i = len/2; i < len; i++){
            cnt2+=(number[i]-'0');
        }
        return cnt1==cnt2;

    }
};