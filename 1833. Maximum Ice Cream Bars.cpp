class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        int maxIceCreams = 0, maxCost = INT_MIN, total = 0;
        for (int x : costs) {
            maxCost = max(maxCost, x);
        }

        vector<int> countSort(maxCost + 1);
        for (int i = 0; i < costs.size(); i++) {
            countSort[costs[i]]++;
        }

        for (int i = 1; i <= maxCost; i++) {
            if (coins < i) break;
            int barsToBuy = min(countSort[i], coins / i);
            maxIceCreams += barsToBuy;
            coins -= barsToBuy * i;
        }
        return maxIceCreams;
    }
};
