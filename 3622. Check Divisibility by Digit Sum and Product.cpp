class Solution {
public:
    int divisor(int n) {
        int sum = 0, product = 1;
        while (n != 0) {
            int rem = n % 10;
            sum += rem;
            product *= rem;
            n /= 10;
        }
        return sum + product;
    }

    bool checkDivisibility(int n) { 
        return (n % divisor(n)) == 0; 
    }
};
