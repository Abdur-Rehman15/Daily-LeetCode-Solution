class Solution {
public:
    string smallestPalindrome(string s) {
        vector<int> charCount(27, 0);
        string temp = "";
        char middle = ' ';

        for (char x : s) {
            charCount[x - 'a']++;
        }

        for (int i = 0; i < 27; i++) {
            for (int j = 0; j < charCount[i] / 2; j++) {
                temp += ('a' + i);
            }
            if (charCount[i] % 2)
                middle = ('a' + i);
        }
        string res = temp;
        if (middle != ' ')
            res += middle;
        reverse(temp.begin(), temp.end());
        res += temp;
        return res;
    }
};
