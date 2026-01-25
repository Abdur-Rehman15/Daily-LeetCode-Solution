class Solution {
public:
    int minimumDifference(vector<int>& nums, int k) {
        int mini = INT_MAX, start = 0, end = k - 1;
        sort(nums.begin(), nums.end());

        while (end < nums.size()) {
            mini = min(mini, nums[end++] - nums[start++]);
        }
        return mini;
    }
};
