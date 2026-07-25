class Solution {
public:
    int maxProduct(int n) {
        int highest = INT_MIN, second_highest = INT_MIN;
        while (n != 0) {
            int rem = n % 10;
            if (rem > highest) {
                second_highest = highest;
                highest = rem;
            } else if (rem > second_highest) {
                second_highest = rem;
            }
            n /= 10;
        }
        return highest * second_highest;
    }
};
