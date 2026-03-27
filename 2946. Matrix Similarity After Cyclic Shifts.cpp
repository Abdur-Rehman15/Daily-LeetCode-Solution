class Solution {
public:
    bool areSame(vector<vector<int>> copy, vector<vector<int>> mat) {
        for (int i = 0; i < mat.size(); i++) {
            for (int j = 0; j < mat[0].size(); j++) {
                if (copy[i][j] != mat[i][j]) {
                    return false;
                }
            }
        }
        return true;
    }

    bool areSimilar(vector<vector<int>>& mat, int k) {
        vector<vector<int>> copy = mat;
        for (int i = 0; i < mat.size(); i++) {
            if (i % 2 == 0) {
                for (int a = 0; a < k; a++) {
                    int temp = mat[i][0];
                    for (int j = 1; j < mat[0].size(); j++) {
                        mat[i][j - 1] = mat[i][j];
                    }
                    mat[i][mat[0].size() - 1] = temp;
                }
            } else {
                for (int a = 0; a < k; a++) {
                    int temp = mat[i][mat[0].size() - 1];
                    for (int j = mat[0].size() - 1; j > 0; j--) {
                        mat[i][j] = mat[i][j - 1];
                    }
                    mat[i][0] = temp;
                }
            }
        }
        return areSame(copy, mat);
    }
};
