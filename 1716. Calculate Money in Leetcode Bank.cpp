class Solution {
public:
    int totalMoney(int n) {

        int amount = 1, prevAmount = 1, total = 0;
        for (int i = 1; i <= n; i++) {
            total += amount;
            amount++;
            if (i % 7 == 0) {
                prevAmount++;
                amount = prevAmount;
            }
        }
        return total;
    }
};
