class Solution {
public:
    int longestBalanced(vector<int>& nums) {
        int longest = 0;
        for (int i = 0; i < nums.size(); i++) {
            int even = 0, odd = 0;
            unordered_set<int> unique;
            for (int j = i; j < nums.size(); j++) {
                if (!unique.count(nums[j])) {
                    (nums[j] % 2 == 0) ? even++ : odd++;
                    unique.insert(nums[j]);
                }
                if (even == odd) {
                    longest = max(longest, j - i + 1);
                }
            }
        }
        return longest;
    }
};
