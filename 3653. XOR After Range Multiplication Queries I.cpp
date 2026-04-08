class Solution {
public:
    int xorAfterQueries(vector<int>& nums, vector<vector<int>>& queries) {
        for (int i = 0; i < queries.size(); i++) {
            int idx = queries[i][0], r = queries[i][1];
            int k = queries[i][2], v = queries[i][3];

            for (; idx <= r; idx += k) {
                nums[idx] = (1LL * nums[idx] * v) % 1000000007LL;
            }
        }

        int res = nums[0];
        for (int i = 1; i < nums.size(); i++) {
            res ^= nums[i];
        }
        return res;
    }
};
