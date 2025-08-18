class Solution {
public:
    string largestGoodInteger(string s) {
        if(s.length() == 3 && s[1] == s[2] && s[0] == s[1])
            return s;
        int temp = -1;
        string ans = "";
        int i;
        for( i = 0; i < s.length() - 2; i++){
            if(s[i] == s[i+1] && s[i+1] == s[i+2]){
                 string sub = string() + s[i] + s[i+1] + s[i+2];
                 cout<<sub<<endl;
                if(stoi(sub) > temp){
                    temp = stoi(sub);
                    ans = string() + s[i]+s[i+1]+s[i+2];
                }
            }
        }
        /*if(i<s.length())
        if(s[i] == s[i+1] && s[i+1] == s[i+2]){
                 string sub = string() + s[i] + s[i+1] + s[i+2];
                 cout<<sub<<endl;
                if(stoi(sub) > temp){
                    temp = stoi(sub);
                    ans = string() + s[i]+s[i+1]+s[i+2];
                }
            }*/
        return ans;
    }
};