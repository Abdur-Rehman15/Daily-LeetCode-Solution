class Solution {
public:
    int maxNumberOfBalloons(string text) {
        unordered_map<char, int> lc;
        for (char x : text) {
            lc[x]++;
        }

        int oneMin = min({lc['b'], lc['a'], lc['n']});
        int twoMin = min(lc['l'], lc['o']);

        return (twoMin / 2 > oneMin) ? oneMin : twoMin / 2;
    }
};
