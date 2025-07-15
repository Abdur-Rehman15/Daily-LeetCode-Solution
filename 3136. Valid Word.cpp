class Solution {
public:
    bool checkVowel(char a) {
        char x = tolower(a);
        return (x == 'a' || x == 'e' || x == 'i' || x == 'o' || x == 'u');
    }

    bool isValid(string word) {

        bool isVowel = false, isConsonant = false;
        int charCount = 0, n=word.size();
        
        for (int i = 0; i < n; i++) {
            if(!isVowel || !isConsonant){
                if ((word[i] >= 'a' && word[i] <= 'z') || (word[i] >= 'A' && word[i] <= 'Z')) {
                    if (checkVowel(word[i]))
                        isVowel = true;
                    else
                        isConsonant = true;
                }
            }
            if (word[i] =='#' || word[i] == '@' || word[i] == '$') {
                return false;
            }
            charCount++;
        }
        return (isVowel && isConsonant && charCount > 2);
    }
};
