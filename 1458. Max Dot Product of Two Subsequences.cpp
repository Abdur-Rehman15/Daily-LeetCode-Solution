class Solution {
public:
    int maxDot(vector<int>& nums1, vector<int>& nums2, vector<vector<int>>& dp, int i, int j) {
        if (i == nums1.size() || j == nums2.size()) return INT_MIN;
        if (dp[i][j] != -1) return dp[i][j];

        int take = nums1[i] * nums2[j] + max(0, maxDot(nums1, nums2, dp, i + 1, j + 1));
        int skip1 = maxDot(nums1, nums2, dp, i, j + 1);
        int skip2 = maxDot(nums1, nums2, dp, i + 1, j);

        dp[i][j] = max({skip1, take, skip2});
        return dp[i][j];
    }

    int maxDotProduct(vector<int>& nums1, vector<int>& nums2) {

        vector<vector<int>> dp(500, vector<int>(500, -1));
        return maxDot(nums1, nums2, dp, 0, 0);
    }
};
