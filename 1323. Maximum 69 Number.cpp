class Solution {
public:
    int maximum69Number(int num) {
        int res = 0, temp = 0;
        vector<int> digits;
        while (num != 0) {
            digits.push_back(num % 10);
            num /= 10;
        }
        reverse(digits.begin(), digits.end());
        int i = 0, n = digits.size();
        for (; i < n; i++) {
            if (digits[i] == 6) {
                res += 9;
                res *= 10;
                i++;
                break;
            }
            res += digits[i];
            res *= 10;
        }
        for (; i < n; i++) {
            res += digits[i];
            res *= 10;
        }
        res /= 10;
        return res;
    }
};
