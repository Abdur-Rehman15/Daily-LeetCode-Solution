class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {

        int m = grid.size(), n = grid[0].size();
        int row = 0, col = n - 1, count = 0;

        while (col >= 0 && row < m) {
            if (grid[row][col] < 0) {
                count += (m - row);
                col--;
            } else {
                row++;
            }
        }
        return count;
    }
};
