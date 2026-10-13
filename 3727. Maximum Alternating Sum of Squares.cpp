class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        int n = nums.size();
        for (int i = 0; i < n; i++)
            nums[i] = abs(nums[i]);
        sort(nums.begin(), nums.end(), greater<int>());
        long long res = 0;
        for (int i = 0; i < n / 2; i++)
            res += (pow(nums[i], 2) - pow(nums[n - 1 - i], 2));
        return (n % 2 == 1) ? res += pow(nums[n / 2], 2) : res;
    }
};
