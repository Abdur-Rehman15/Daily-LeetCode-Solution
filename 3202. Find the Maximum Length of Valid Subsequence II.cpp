class Solution {
public:
    int maximumLength(vector<int>& nums, int k) {
        int n = nums.size();
        if (n <= 1) return n;
        
        vector<vector<int>> dp(k, vector<int>(k, 0));
        
        int maxLen = 1;
        
        for (int num : nums) {
            int rem = num % k;
            
            for (int prev = 0; prev < k; prev++) {
                dp[rem][prev] = max(dp[rem][prev], dp[prev][rem] + 1);
                maxLen = max(maxLen, dp[rem][prev]);
            }
        }
        return maxLen;
    }
};
