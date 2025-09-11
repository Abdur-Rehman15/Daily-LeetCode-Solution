class Solution {
public:
    bool isVowel(char x) {
        return (x == 'a' || x == 'e' || x == 'i' || x == 'o' || x == 'u'
        || x=='A'||x == 'E' || x == 'I' || x == 'O' || x == 'U');
    }
    string sortVowels(string s) {
        vector<char> chars;
        for (char x : s) {
            if (isVowel(x)) {
                chars.push_back(x);
            }
        }

        sort(chars.begin(), chars.end());

        int n=s.size();
        for (int i = 0, j = 0; i < n; i++) {
            if (isVowel(s[i])) {
                s[i] = chars[j];
                j++;
            }
        }
        return s;
    }
};
