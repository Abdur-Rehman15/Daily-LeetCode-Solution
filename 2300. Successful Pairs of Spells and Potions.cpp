class Solution {
public:
    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {

        vector<int> res;
        sort(potions.begin(), potions.end());
        int n = potions.size();
        bool isLast = false;

        for (int x : spells) {
            isLast = false;
            int left = 0, right = n - 1, mid = 0;
            while (left <= right) {
                mid = left + (right - left) / 2;
                if ((long)x * potions[mid] >= success) {
                    if (mid == n - 1)
                        isLast = true;
                    right = mid - 1;
                } else if ((long)x * potions[mid] < success) {
                    if (mid < n - 1 && (long)x * potions[mid + 1] >= success) {
                        mid++;
                        if (mid == n - 1)
                            isLast = true;
                        break;
                    }
                    left = mid + 1;
                } else {
                    right = mid - 1;
                }
            }
            (mid == n - 1 && !isLast) ? res.push_back(0) : res.push_back(n - mid);
        }
        return res;
    }
};
