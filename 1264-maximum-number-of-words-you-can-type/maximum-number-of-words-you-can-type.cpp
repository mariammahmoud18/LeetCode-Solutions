class Solution {
public:
    int canBeTypedWords(string text, string brokenLetters) {
        vector<string> words;
        string temp = "";
        for(char c: text){
            if( c== ' ')
            {
                words.push_back(temp);
                cout<<temp<<endl;
                temp = "";
            }
            else
            {
                temp+=c;
            }
        }
        words.push_back(temp);
        int numOfWords = words.size();
        set<char> s;
        for(char c: brokenLetters){
            s.insert(c);
        }

        for(string word: words){
            for(char c : s){
                if(word.find(c) != string::npos)
                    {numOfWords--;
                    
                    break;}
            }
        }
        return numOfWords;
    }
    
};