class Solution {
public:
    vector<vector<int>> generate(int numRows) {

        vector<vector<int>> res(numRows);
        int count = -1;
        for (int i = 0; i < numRows; i++) {
            res[i].push_back(1);
            for (int j = 0; j < count; j++) {
                res[i].push_back(res[i - 1][j] + res[i - 1][j + 1]);
            }
            if (count > -1)
                res[i].push_back(1);
            count++;
        }
        return res;
    }
};
