class Solution {
public:
    int missingInteger(vector<int>& nums) {
        int prefixSum = nums[0];
        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] == (nums[i - 1] + 1)) {
                prefixSum += nums[i];
            }
            else{
                break;
            }
        }
        unordered_set<int> exist;
        for (int x : nums) {
            exist.insert(x);
        }
        for (int i = prefixSum;; i++) {
            if (exist.find(i) == exist.end())
                return i;
        }
        return -1;
    }
};
