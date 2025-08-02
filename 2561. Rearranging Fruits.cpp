class Solution {
public:
    long long minCost(vector<int>& basket1, vector<int>& basket2) {
        unordered_map<int, int> freq;
        int n = basket1.size();
        
        for (int i = 0; i < n; i++) {
            freq[basket1[i]]++;
            freq[basket2[i]]--;
        }
        
        vector<int> swaps;
        int min_val = INT_MAX;
        
        for (auto [num, count] : freq) {
            min_val = min(min_val, num);
            if (count % 2 != 0) return -1;
            int diff = abs(count) / 2;
            for (int i = 0; i < diff; i++) {
                swaps.push_back(num);
            }
        }
        
        sort(swaps.begin(), swaps.end());
        long long cost = 0;
        int m = swaps.size() / 2;
        
        for (int i = 0; i < m; i++) {
            cost += min(swaps[i], 2 * min_val);
        }
        return cost;
    }
};
