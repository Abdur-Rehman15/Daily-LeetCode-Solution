class Solution {
public:
    int specialTriplets(vector<int>& nums) {
        unordered_map<long, long> freqLeft;
        unordered_map<long, long> freqRight;
        long long count = 0;

        for (int i = 1; i < nums.size(); i++) {
            freqRight[nums[i]]++;
        }

        freqLeft[nums[0]]++;

        for (int i = 1; i < nums.size() - 1; i++) {
            int curr = nums[i];
            freqRight[curr]--;

            if (freqLeft.find(curr * 2) != freqLeft.end() &&
                freqRight.find(curr * 2) != freqRight.end()) {
                count += (freqLeft[curr * 2] * freqRight[curr * 2]) % 1000000007;
            }
            freqLeft[curr]++;
        }
        return count % 1000000007;
    }
};
