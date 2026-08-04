class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        vector<int> res;
        int maxi = INT_MIN, mini = INT_MAX;
        unordered_map<int, bool> isPresent;

        for (int x : nums) {
            isPresent[x] = true;
            maxi = max(maxi, x);
            mini = min(mini, x);
        }
        for (int i = mini; i <= maxi; i++) {
            if (!isPresent[i]) {
                res.push_back(i);
            }
        }
        return res;
    }
};
