class Solution {
public:
    long long getDescentPeriods(vector<int>& prices) {

        long count = 1, consec = 1;
        for (int i = 1; i < prices.size(); i++) {
            (prices[i - 1] - prices[i] == 1) ? consec++ : consec = 1;
            count += consec;
        }
        return count;
    }
};
