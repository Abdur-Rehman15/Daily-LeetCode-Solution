class Solution {
public:
    vector<vector<int>> sortMatrix(vector<vector<int>>& grid) {

        int n = grid.size();
        int j = n - 2, i = 0;
        vector<int> temp;

        while (j > 0) {
            for (int k = j, l = 0; k < n; k++, l++) {
                temp.push_back(grid[l][k]);
            }
            sort(temp.begin(), temp.end());
            for (int k = j, l = 0, index = 0; k < n; k++, index++, l++) {
                grid[l][k] = temp[index];
            }
            j--;
            temp.clear();
        }

        while (i <= n - 2) {
            for (int k = i, l = 0; k < n; k++, l++) {
                temp.push_back(grid[k][l]);
            }
            sort(temp.begin(), temp.end(), greater<int>());
            for (int k = i, l = 0, index = 0; k < n; k++, index++, l++) {
                grid[k][l] = temp[index];
            }
            i++;
            temp.clear();
        }

        return grid;
    }
};
