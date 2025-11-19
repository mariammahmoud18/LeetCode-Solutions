class Solution {
public:
    int compress(vector<char>& chars) {
        if (chars.size() == 1)
            return 1;
        int start = 0;
        int end = 0;
        string temp;
        while (end < chars.size()) {
            cout << chars[end] << endl;
            if (chars[start] != chars[end]) {
                temp += chars[start];
                if (end - start > 1)
                    temp += to_string(end - start);
                start = end;
            }
            end++;
        }
        temp += chars[start];
        if (end - start > 1) {
            temp += to_string(end - start);
        }

        for (int i = 0; i < temp.length(); i++) {
            chars[i] = temp[i];
        }
        return temp.length();
    }
};