class Solution {
public:
    int maximumGain(string s, int x, int y) {
        int cnt = 0;
        string temp;
        char c1 = 'a', c2 = 'b';
        int gain1 = x;
        int gain2 = y;
        if(y > x){
            c1 = 'b';
            c2 = 'a';
            gain1 = y;
            gain2 = x;
        }

        for(char c:s){
            if(!temp.empty() && c == c2 && temp.back() == c1){
                temp.pop_back();
                cnt+= gain1;
            }
            else{
                temp.push_back(c);
            }
        }
        string rem;
        for(char c:temp){
            if(!rem.empty() && c == c1 && rem.back() == c2){
                rem.pop_back();
                cnt+= gain2;
            }
            else{
                rem.push_back(c);
            }
        }
        
        return cnt;
    }
};