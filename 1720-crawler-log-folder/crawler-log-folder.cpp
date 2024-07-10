class Solution {
public:
    int minOperations(vector<string>& logs) {
        stack<string> ops;
        for(string s: logs){
           if(s == "../" && ops.size() != 0)
                ops.pop();
            else if (s == "./")
                continue;
            else if (s != "../" && s!="./")
                ops.push(s);     
        }
        return ops.size();
    }
};