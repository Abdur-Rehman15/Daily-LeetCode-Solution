class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        int count = 0, maxi = INT_MIN;
        unordered_map<int, int> numFreq;

        for (int x : nums) {
            numFreq[x]++;
            maxi = max(maxi, numFreq[x]);
        }
        for (auto [num, freq] : numFreq) {
            if (freq == maxi) {
                count += maxi;
            }
        }
        return count;
    }
};
