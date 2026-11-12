class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int longest = 1, temp = 1, n = nums.size();
        for (int i = 0; i < n; i++) {
            temp = 1;
            for (int j = i; j < n - 1; j++) {
                if (nums[j] < nums[j + 1]) temp++;
                else break;
            }
            longest = max(longest, temp);
        }
        for (int i = 0; i < n; i++) {
            temp = 1;
            for (int j = i; j < n - 1; j++) {
                if (nums[j] > nums[j + 1]) temp++;
                else break;
            }
            longest = max(longest, temp);
        }
        return longest;
    }
};
