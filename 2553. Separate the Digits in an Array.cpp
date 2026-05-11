class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
        vector<int> ans;
        for (int x : nums) {
            string temp = to_string(x);
            for (char a : temp) {
                ans.push_back(a - '0');
            }
        }
        return ans;
    }
};
