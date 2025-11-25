class Solution {
public:
    int smallestRepunitDivByK(int k) {

        if (k % 2 == 0 || k % 5 == 0)
            return -1;

        long long num = 1;
      
        for (int i = 1;; i++) {
            if (num % k == 0)
                return i;
            num = (num * 10 + 1) % k;
        }
        return 0;
    }
};
