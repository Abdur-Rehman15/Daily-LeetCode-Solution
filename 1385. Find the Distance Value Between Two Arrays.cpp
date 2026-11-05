class Solution {
public:
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
        int m = arr1.size(), n = arr2.size(), count = 0;
        for (int i = 0; i < m; i++) {
            bool wrong = false;
            for (int j = 0; j < n; j++) {
                if (abs(arr1[i] - arr2[j]) <= d)
                    wrong = true;
            }
            if (!wrong) count++;
        }
        return count;
    }
};
