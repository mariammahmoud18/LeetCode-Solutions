class Solution {
public:
    bool isOneBitCharacter(vector<int>& bits) {
        string temp;
        for(int i = 0; i < bits.size(); i++){
            temp += to_string(bits[i]);
                            cout<<temp<<endl;

            if((temp == "0" && i != bits.size() - 1) || temp.length() == 2 && (temp == "10" || temp == "11")){
                temp = "";
            }
            if(temp == "0" && i == bits.size() - 1)
                return true;
        }
        return false;
    }
};