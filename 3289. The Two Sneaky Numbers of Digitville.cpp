class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        vector<int> res;
        vector<int> count(101);

        for (int x : nums) {
            count[x]++;
            if (count[x] > 1) {
                res.push_back(x);
            }
        }
        return res;
    }
};
