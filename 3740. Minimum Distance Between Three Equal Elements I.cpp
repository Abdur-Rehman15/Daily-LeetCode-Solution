class Solution {
public:
    int minimumDistance(vector<int>& nums) {
        int mini = INT_MAX, n = nums.size();
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (i == j) continue;
                for (int k = 0; k < n; k++) {
                    if (j == k || i == k) continue;
                    if (nums[i] == nums[j] && nums[j] == nums[k])
                        mini = min(mini, abs(i - j) + abs(j - k) + abs(k - i));
                }
            }
        }
        return (mini == INT_MAX) ? -1 : mini;
    }
};
