class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        vector<int> res, sorted;
        if(!arr.size()) return res;
        unordered_map<int, int> rank;
        sorted = arr;
        sort(sorted.begin(), sorted.end());
        rank[sorted[0]] = 1;
        for (int i = 1, rankNum = 1; i < sorted.size(); i++) {
            if (sorted[i] == sorted[i - 1]) {
                rank[sorted[i]] = rankNum;
            } else {
                rank[sorted[i]] = rankNum + 1;
                rankNum++;
            }
        }
        for (int i = 0; i < arr.size(); i++) {
            res.push_back(rank[arr[i]]);
        }
        return res;
    }
};
