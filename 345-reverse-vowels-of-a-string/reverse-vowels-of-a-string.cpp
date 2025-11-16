class Solution {
public:
    string reverseVowels(string s) {
        int start = 0;
        int end = s.size() - 1;
        set<char> vowels = {'a', 'A', 'E', 'e', 'I', 'i', 'O', 'o', 'U', 'u'};
        while (start < end) {
            while (!vowels.contains(s[start]) && start < end) {
                cout << "start: " << s[start] << endl;
                start++;
            }
            while (!vowels.contains(s[end]) && start < end) {
                cout << "end: " << s[end] << endl;

                end--;
            }
            if (vowels.contains(s[start]) && vowels.contains(s[end])) {
                cout<<"result: "<<s[start]<<" "<<s[end]<<endl;
                swap(s[start], s[end]);
                start++;
                end--;
            }
        }
        return s;
    }
};