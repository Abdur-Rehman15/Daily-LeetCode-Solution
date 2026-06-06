class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        
        int n = nums.size();
        vector<int> leftSum(n, 0), rightSum(n, 0), answer(n, 0);

        for (int i = 1, j = n - 2; i < n; i++, j--) {
            leftSum[i] = nums[i - 1] + leftSum[i - 1];
            rightSum[j] = nums[j + 1] + rightSum[j + 1];
        }
        for (int i = 0; i < n; i++) {
            answer[i] = abs(leftSum[i] - rightSum[i]);
        }
        return answer;
    }
};
