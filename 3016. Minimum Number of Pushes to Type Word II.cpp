class Solution {
public:
    int minimumPushes(string word) {
        vector<int> frequencies(26, 0);
        for (char x : word) {
            frequencies[x - 'a']++;
        }
        sort(frequencies.begin(), frequencies.end(), greater<int>());
        int counter = 0, multiplier = 1, res = 0;
        for (int count : frequencies) {
            res += (multiplier * count);
            counter++;
            if (counter % 8 == 0) {
                multiplier++;
            }
        }
        return res;
    }
};
