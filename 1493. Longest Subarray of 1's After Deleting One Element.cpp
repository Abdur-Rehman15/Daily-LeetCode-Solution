class Solution {
public:
    int longestSubarray(vector<int>& nums) {

        bool firstZero = false;
        int longest = INT_MIN;
        int sub1 = 0, sub2 = 0, n = nums.size();

        for (int i = 0; i < n; i++) {
            if (nums[i] == 1) {
                if (!firstZero) {
                    sub1++;
                } else {
                    sub2++;
                }
            } else {
                if (!firstZero) {
                    firstZero = true;
                } else {
                    longest = max(longest, sub1 + sub2);
                    sub1 = sub2;
                    sub2 = 0;
                }
            }
        }
        longest = max(longest, sub1 + sub2);

        if (!firstZero) {
            return n - 1;
        }
        return longest;
    }
};
