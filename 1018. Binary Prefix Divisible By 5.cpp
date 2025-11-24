class Solution {
public:
    vector<bool> prefixesDivBy5(vector<int>& nums) {

        long long num = 0;
        vector<bool> res;

        for (int x : nums) {
            num = (num * 2 + x) % 5;
            (num == 0) ? res.push_back(1) : res.push_back(0);
        }
        return res;
    }
};
