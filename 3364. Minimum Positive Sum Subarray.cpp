class Solution {
public:
    int minimumSumSubarray(vector<int>& nums, int l, int r) {
        int minSum = INT_MAX, temp = 0, n = nums.size();
        for (int c = l; c <= r; c++) {
            for (int i = 0; i < n - c + 1; i++) {
                temp = 0;
                for (int j = i; j < i + c; j++) {
                    temp += nums[j];
                }
                if (temp > 0) minSum = min(minSum, temp);
            }
        }
        return (minSum == INT_MAX) ? -1 : minSum;
    }
};
