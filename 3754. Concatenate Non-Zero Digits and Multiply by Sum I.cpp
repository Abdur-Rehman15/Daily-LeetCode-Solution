class Solution {
public:
    long long sumAndMultiply(int n) {
        long long sum = 0;
        string nonZero = "";
        if (!n) return n;
        while (n != 0) {
            int rem = n % 10;
            if (rem > 0)
                nonZero += to_string(rem);
            sum += rem;
            n /= 10;
        }
        reverse(nonZero.begin(), nonZero.end());
        return sum * stoll(nonZero);
    }
};
