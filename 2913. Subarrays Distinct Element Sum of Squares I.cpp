class Solution {
public:
    int sumCounts(vector<int>& nums) {
        int n = nums.size(), sum = 0;
        for (int i = 0; i < n; i++) {
            unordered_set<int> unique;
            for (int j = i; j < n; j++) {
                unique.insert(nums[j]);
                sum += pow(unique.size(), 2);
            }
        }
        return sum;
    }
};
