class Solution {
public:
    int numSub(string s) {

        const long long MOD = 1e9 + 7;

        long long onesCount = 0, consecutive = -1;
        for (char x : s) {
            if (x == '1') {
                onesCount++;
                consecutive++;
                onesCount += consecutive;
            } else {
                consecutive = -1;
            }
        }
        return onesCount % MOD;
    }
};
