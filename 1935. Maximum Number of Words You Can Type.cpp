class Solution {
public:
    int canBeTypedWords(string text, string brokenLetters) {

        int wordCount = 0;
        unordered_set<char> broken;
        for (char x : brokenLetters) {
            broken.insert(x);
        }
        bool notBroken = true;
        for (int i = 0; i < text.size(); i++) {
            if (text[i] == ' ') {
                if (notBroken)
                    wordCount++;
                else
                    notBroken = true;
                continue;
            }
            if (broken.find(text[i]) != broken.end()) {
                notBroken = false;
            }
        }
        return (notBroken) ? wordCount + 1 : wordCount;
        ;
    }
};
