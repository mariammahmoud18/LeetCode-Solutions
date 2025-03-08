class Solution {
public:
    int minimumRecolors(string blocks, int k) {
        int left = 0;
        int right = 0;
        int minNum = 1000000;
        int whiteSum = 0;
        while(left <= right && right < blocks.length()){
            if(blocks[right]=='W')
                whiteSum++;
            if((right - left + 1) == k){
                if(minNum > whiteSum)
                    minNum = whiteSum;
                 if (blocks[left] == 'W') 
                    whiteSum--;
                left++;

            }
            right++;
        }
        return minNum;
    }
};