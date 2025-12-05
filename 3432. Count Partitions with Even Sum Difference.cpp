class Solution {
public:
    int countPartitions(vector<int>& nums) {
        int sum = 0, left = 0, count = 0, right = 0;
        for (int x : nums) {
            sum += x;
        }
        for (int i = 0; i < nums.size() - 1; i++) {
            left += nums[i];
            right = sum - left;
            if (abs(right - left) % 2 == 0)
                count++;
        }
        return count;
    }
};
