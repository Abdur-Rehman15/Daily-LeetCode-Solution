class Solution {
public:
    long long maximumHappinessSum(vector<int>& happiness, int k) {

        sort(happiness.begin(), happiness.end(), greater<int>());
        long long sum = 0, decrease = 0;

        for (int i = 0; i < k; i++) {
            long long minimized = happiness[i] - decrease;
            sum += ((minimized > -1) ? minimized : 0);
            decrease++;
        }
        return sum;
    }
};
