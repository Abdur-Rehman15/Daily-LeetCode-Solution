class Solution {
public:
    int maxSum(vector<int>& nums) {

        int maxSum = 0, minNeg = INT_MIN, n = nums.size();
        unordered_set<int> unique;
        vector<int> toErase;
        bool isPositive = false, isNegative = false;

        for (int i = 0; i < n; i++) {
            if (nums[i] >= 0)
                isPositive = true;
            else {
                isNegative = true;
                if (nums[i] > minNeg)
                    minNeg = nums[i];
            }
            unique.insert(nums[i]);
        }

        if (isNegative && isPositive) {
            for (int x : unique) {
                if (x < 0) {
                    toErase.push_back(x);
                }
            }
            for (int x : toErase) {
                unique.erase(x);
            }
        } else if (!isPositive) {
            return minNeg;
        }

        for (int x : unique) {
            maxSum += x;
        }

        return maxSum;
    }
};
