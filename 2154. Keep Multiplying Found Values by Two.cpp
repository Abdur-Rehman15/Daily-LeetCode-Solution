class Solution {
public:
    int findFinalValue(vector<int>& nums, int original) {
        unordered_set<int> num;
        for (int x : nums) {
            num.insert(x);
        }
        while (num.find(original) != num.end()) {
            original *= 2;
        }
        return original;
    }
};
