class Solution {
public:
    long long pathIsDivisible(vector<vector<vector<long long>>>& dp, vector<vector<int>>& grid, int i, int j, int rem, int k) {
        if (i == grid.size() - 1 && j == grid[0].size() - 1) {
            return rem == 0;
        }

        long long ways = 0;

        if (dp[i][j][rem] != -1){
            return dp[i][j][rem];
        }

        if (j + 1 < grid[0].size()) {
            ways = (ways + pathIsDivisible(dp, grid, i, j + 1, ((rem + grid[i][j + 1])) % k, k)) % 1000000007;
        }
        if (i + 1 < grid.size()) {
            ways = (ways + pathIsDivisible(dp, grid, i + 1, j, ((rem + grid[i + 1][j])) % k, k)) % 1000000007;
        }
        return dp[i][j][rem] = ways;
    }

    long long paths(vector<vector<int>>& grid, int m, int n, int k) {
        vector<vector<vector<long long>>> dp(m, vector<vector<long long>>(n, vector<long long>(k, -1LL)));

        return pathIsDivisible(dp, grid, 0, 0, grid[0][0] % k, k);
    }

    int numberOfPaths(vector<vector<int>>& grid, int k) {
        int m = grid.size();
        int n = grid[0].size();

        return paths(grid, m, n, k);
    }
};
