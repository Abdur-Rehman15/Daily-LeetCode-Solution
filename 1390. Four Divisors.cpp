class Solution {
public:
    int sumFourDivisors(vector<int>& nums) {
        int sum = 0;
        for (int x : nums) {
            int temp = 0, count = 0;
            for (int i = 1; i <= sqrt(x); i++) {
                if (x % i == 0) {
                    temp += i;
                    temp += ((x / i) != i) ? (x / i) : count--;
                    count += 2;
                }
                if (count > 4)
                    break;
            }
            if (count == 4) {
                sum += temp;
            }
        }
        return sum;
    }
};
