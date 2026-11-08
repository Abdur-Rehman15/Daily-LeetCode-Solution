class Solution {
public:
    int countServers(vector<vector<int>>& grid) {
        int m = grid.size(), n = grid[0].size();
        vector<int> rowCount(m), colCount(n);
        for (int i = 0; i < m; i++) {
            int temp = 0;
            for (int j = 0; j < n; j++) {
                if (grid[i][j])
                    temp++;
            }
            rowCount[i] = temp;
        }
        for (int j = 0; j < n; j++) {
            int temp = 0;
            for (int i = 0; i < m; i++) {
                if (grid[i][j])
                    temp++;
            }
            colCount[j] = temp;
        }
        int total = 0;
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (grid[i][j]) {
                    if (rowCount[i] > 1 || colCount[j] > 1)
                        total++;
                }
            }
        }
        return total;
    }
};
