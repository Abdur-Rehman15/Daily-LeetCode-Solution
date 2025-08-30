class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {

        int n = board.size();
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                char curr = board[i][j];
                if (curr=='.') continue;
                for (int k = 0; k < n; k++) { // for column
                    if (k == i)
                        continue;
                    if (curr == board[k][j])
                        return false;
                }
                for (int k = 0; k < n; k++) { // for row
                    if (k == j)
                        continue;
                    if (curr == board[i][k])
                        return false;
                }
                int rowStart = (i / 3) * 3;
                int colStart = (j / 3) * 3;

                for (int k = rowStart; k < rowStart + 3; k++) { // for 3 by 3 box check 
                    for (int l = colStart; l < colStart + 3; l++) {
                        if (k == i && l == j)
                            continue;
                        if (curr == board[k][l])
                            return false;
                    }
                }
            }
        }
        return true;
    }
};
