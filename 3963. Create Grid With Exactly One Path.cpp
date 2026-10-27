class Solution {
public:
    vector<string> createGrid(int m, int n) {
        string temp = "";
        vector<string> res;

        for (int i = 0; i < n; i++) temp += ".";
        res.push_back(temp);
        temp = "";
        for (int i = 0; i < n - 1; i++) temp += "#";
        temp += ".";
        for (int i = 0; i < m - 1; i++) res.push_back(temp);

        return res;
    }
};
