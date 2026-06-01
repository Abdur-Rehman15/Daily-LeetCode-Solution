class Solution {
public:
    int minimumCost(vector<int>& cost) {
        int total_cost = 0;
        sort(cost.begin(), cost.end());
        reverse(cost.begin(), cost.end());

        for (int i = 0; i < cost.size(); i += 3) {
            total_cost += cost[i];
            if (i < cost.size() - 1) total_cost += cost[i + 1];
        }
        return total_cost;
    }
};
