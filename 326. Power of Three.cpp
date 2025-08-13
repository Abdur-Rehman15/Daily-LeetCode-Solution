class Solution {
public:
    bool isPowerOfThree(int n) {
        for (int i = 0;; i++) {
            long long temp = pow(3, i);
            if (temp > n)
                return false;
            if (temp == n)
                return true;
        }
        return false;
    }
};
