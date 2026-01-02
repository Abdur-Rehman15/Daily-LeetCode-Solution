class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        unordered_map<int, int> numCount;
        int n = nums.size();
        for (int x : nums) {
            numCount[x]++;
            if (numCount[x] == n / 2)
                return x;
        }
        return 0;
    }
};
