class Solution {
public:
    int minDeletionSize(vector<string>& strs) {
        int count = 0, cols = strs[0].size(), rows = strs.size();
        for (int j = 0; j < cols; j++) {
            for (int i = 1; i < rows; i++) {
                if (strs[i - 1][j] > strs[i][j]) {
                    count++;
                    break;
                }
            }
        }
        return count;
    }
};
