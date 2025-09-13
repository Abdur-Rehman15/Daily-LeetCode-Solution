class Solution {
public:
    int maxFreqSum(string s) {
        unordered_map<char, int> vowel;
        unordered_map<char, int> consonant;
        int maxi1 = 0, maxi2 = 0;

        for (char x : s) {
            if (x == 'a' || x == 'e' || x == 'i' || x == 'a' || x == 'o' || x == 'u') {
                vowel[x]++;
                maxi1 = max(maxi1, vowel[x]);
            } else {
                consonant[x]++;
                maxi2 = max(maxi2, consonant[x]);
            }
        }
        return maxi1 + maxi2;
    }
};
