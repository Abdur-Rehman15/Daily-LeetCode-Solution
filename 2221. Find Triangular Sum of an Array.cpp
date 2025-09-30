class Solution {
public:
    void TriangleSum(vector<int>& nums, int i, int n) {
        if (n == 1) {
            return;
        }
        for (int k = 0; k < n - 1; i++, k++) {
            nums.push_back((nums[i] + nums[i + 1]) % 10);
        }
        TriangleSum(nums, i + 1, n - 1);
    }

    int triangularSum(vector<int>& nums) {
        int n = nums.size();
        TriangleSum(nums, 0, n);
        return nums[nums.size() - 1];
    }
};
