class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        deque<int> dq;
        for (int i = 0; i < grid.size(); i++) {
            for (int j = 0; j < grid[0].size(); j++) {
                dq.push_back(grid[i][j]);
            }
        }
        for (int i = 0; i < k; i++) {
            int temp = dq.back();
            dq.pop_back();
            dq.push_front(temp);
        }
        for (int i = 0; i < grid.size(); i++) {
            for (int j = 0; j < grid[0].size(); j++) {
                grid[i][j] = dq.front();
                dq.pop_front();
            }
        }
        return grid;
    }
};
