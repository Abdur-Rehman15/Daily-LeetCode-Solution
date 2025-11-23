class Solution {
public:
    int maxSum(vector<int>& nums, int i, int sum, vector<vector<int>>& dp) {

        if (i == nums.size()) {
            return (sum % 3 == 0 ? 0 : INT_MIN);
        }
        int rem = sum % 3;

        if (dp[i][rem] != -1)
            return dp[i][rem];

        int skip = maxSum(nums, i + 1, sum, dp);
        int pick = maxSum(nums, i + 1, sum + nums[i], dp);
        
        if (pick != INT_MIN) {
            pick += nums[i];
        }
        return dp[i][rem] = max(skip, pick);
    }

    int maxSumDivThree(vector<int>& nums) {
        vector<vector<int>> dp(nums.size() + 1, vector<int>(3, -1));

        return maxSum(nums, 0, 0, dp);
    }
};
