class Solution {
public:
    vector<int> getBiggestThree(vector<vector<int>>& grid) {
        vector<int> res;
        unordered_set<int> distinctSum;
        int m = grid.size(), n = grid[0].size();

        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                int e = 0;
                distinctSum.insert(grid[i][j]);
                while (true) {
                    if ((i - 1 - e) >= 0 && (j - 1 - e) >= 0 &&
                        (i + 1 + e) < m && (j + 1 + e) < n) {

                        int sum = 0;
                        for (int k = 0; k <= e + 1; k++)
                            sum += grid[i - 1 - e + k][j + k];

                        for (int k = 1; k <= e + 1; k++)
                            sum += grid[i + k][j + 1 + e - k];

                        for (int k = 1; k <= e + 1; k++)
                            sum += grid[i + 1 + e - k][j - k];

                        for (int k = 1; k <= e; k++)
                            sum += grid[i - k][j - 1 - e + k];

                        distinctSum.insert(sum);
                        e++;
                    } else {
                        break;
                    }
                }
            }
        }
        for (int x : distinctSum) {
            res.push_back(x);
        }
        sort(res.begin(), res.end(), greater<int>());
        while (res.size() > 3) {
            res.pop_back();
        }
        return res;
    }
};
