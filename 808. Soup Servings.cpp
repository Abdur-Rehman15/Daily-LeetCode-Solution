class Solution {
public:
    vector<vector<double>> dp; 

    double prob(int a, int b) {
        if (a <= 0 && b > 0) return 1.0;
        if (a <= 0 && b <= 0) return 0.5;
        if (b <= 0 && a > 0) return 0.0;

        if (dp[a][b] != -1.0) 
            return dp[a][b];

        return dp[a][b] = 0.25 * (
            prob(a - 100, b) +
            prob(a - 75, b - 25) +
            prob(a - 50, b - 50) +
            prob(a - 25, b - 75)
        );
    }

    double soupServings(int n) {
        
        if (n > 5000) return 1.0; 

        dp.assign(n + 1, vector<double>(n + 1, -1.0));

        return prob(n, n);
    }
};
