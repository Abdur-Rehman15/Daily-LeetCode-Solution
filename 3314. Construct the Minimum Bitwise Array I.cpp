class Solution {
public:
    vector<int> minBitwiseArray(vector<int>& nums) {
        vector<int> ans;
        bool done = false;

        for (int x : nums) {
            done = false;
            for (int i = 0; i <= x; i++) {
                if ((i | i + 1) == x) {
                    ans.push_back(i);
                    done = true;
                    break;
                }
            }
            if (!done) ans.push_back(-1);
        }
        return ans;
    }
};
