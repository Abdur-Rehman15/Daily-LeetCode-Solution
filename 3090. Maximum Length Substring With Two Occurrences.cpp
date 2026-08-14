class Solution {
public:
    int maximumLengthSubstring(string s) {
        int maxi = INT_MIN;
        for (int i = 0; i < s.size(); i++) {
            unordered_map<char, int> letterCount;
            int temp = 0;
            for (int j = i; j < s.size(); j++) {
                letterCount[s[j]]++;
                if (letterCount[s[j]] > 2) break;
                temp++;
            }
            maxi = max(maxi, temp);
        }
        return maxi;
    }
};
