class Solution {
public:
    vector<int> sumZero(int n) {
        vector<int> res;

        if (n % 2 == 1) {
            for (int i = 0, num = -1 * n / 2; i < n; i++, num++) {
                res.push_back(num);
            }
        } else {
            for (int i = 0, num = -1 * n / 2; i < n; i++, num++) {
                if (num == 0) {
                    num++;
                }
                res.push_back(num);
            }
        }
        return res;
    }
};
