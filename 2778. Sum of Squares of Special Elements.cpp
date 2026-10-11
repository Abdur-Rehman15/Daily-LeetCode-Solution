class Solution {
public:
    int sumOfSquares(vector<int>& nums) {
        long sum = 0, i = 1, n = nums.size();
        for (int x : nums) {
            if (n % i == 0) sum += (x * x);
            i++;
        }
        return sum;
    }
};
