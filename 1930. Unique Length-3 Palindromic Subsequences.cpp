class Solution {
public:
    int countPalindromicSubsequence(string s) {

        vector<int> left(26, 0);
        vector<int> right(26, 0);

        for (char a : s) {
            right[a - 'a']++;
        }

        unordered_set<string> palindromes;

        for (int i = 0; i < s.size(); i++) {
            char middle = s[i];
            right[s[i] - 'a']--;

            for (char j = 'a'; j <= 'z'; j++) {
                if (right[j - 'a'] > 0 && left[j - 'a'] > 0) {
                    string temp = "";
                    temp+=j;
                    temp+=middle;
                    temp+=j;
                    palindromes.insert(temp);
                }
            }
            left[s[i] - 'a']++;
        }
        return palindromes.size();
    }
};
