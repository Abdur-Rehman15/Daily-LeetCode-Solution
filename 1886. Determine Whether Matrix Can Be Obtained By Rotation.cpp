class Solution {
public:
    void rotateby90(vector<vector<int>>& mat) {
        int n = mat.size();
        for (int j = 0; j < n; j++) {
            for (int i = 0; i < n / 2; i++) {
                swap(mat[i][j], mat[n - 1 - i][j]);
            }
        }
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                swap(mat[i][j], mat[j][i]);
            }
        }
    }

    bool isSame(vector<vector<int>> mat, vector<vector<int>> target) {
        int n = mat.size();
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (mat[i][j] != target[i][j]) {
                    return false;
                }
            }
        }
        return true;
    }

    bool findRotation(vector<vector<int>>& mat, vector<vector<int>>& target) {

        for (int i = 0; i < 4; i++) {
            rotateby90(mat);
            if (isSame(mat, target)) {
                return true;
            }
        }
        return false;
    }
};
