class Solution {
public:
    bool isFree(unordered_map<int, unordered_set<int>> &r, vector<int> &seats, int row) {
        for (int x : seats) {
            if (r[row].find(x) != r[row].end())
                return false;
        }
        return true;
    }

    int maxNumberOfFamilies(int n, vector<vector<int>>& reservedSeats) {
        unordered_map<int, unordered_set<int>> reserved;
        for (const auto& x : reservedSeats) {
            reserved[x[0]].insert(x[1]);
        }

        int assigned = 0;
        vector<int> group1 = {2, 3, 4, 5};
        vector<int> group2 = {4, 5, 6, 7};
        vector<int> group3 = {6, 7, 8, 9};

        for (const auto&[num, val]: reserved) {
            bool isFirst = false, isSecond = false;
            if (isFree(reserved, group1, num)) {
                assigned++;
                isFirst = true;
            }
            if (!isFirst && isFree(reserved, group2, num)) {
                assigned++;
                isSecond = true;
            }
            if (!isSecond && isFree(reserved, group3, num)) {
                assigned++;
            }
        }
        return assigned + (n - reserved.size()) * 2;
    }
};
