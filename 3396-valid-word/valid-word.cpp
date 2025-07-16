class Solution {
public:
    bool isValid(string word) {
        int charNum = 0;
        int digits = 0;
        int vowels = 0;
        int cons = 0;
        int num = 0;
        for(char c: word){
            if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U'){
                vowels++;
            }
            else if (! (c >= 48 && c <= 57) && ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))){
                cons++;
            }
            if((c >= 65 && c <= 90) || (c >= 97 && c <= 122) || (c >= 48 && c <= 57)){
                digits++;
            }
            
            
        }
        cout<<digits<<vowels<<cons;
        if(digits == word.length() && vowels && cons && word.length() >= 3)
        return true;
        else
        return false;
    
    }
};