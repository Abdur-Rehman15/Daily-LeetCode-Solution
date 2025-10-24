class Solution {
public:
    bool isBalanced(int x) {
        string num = to_string(x);
        vector<int> freq(10);

        for (char x : num) {
            if (x == '0') return false;
            freq[x - '0']++;
            if (freq[x - '0'] > x) return false;
        }
        for (int i = 1; i <= 9; i++) {
            if (freq[i] == 0) continue;
            if (freq[i] != i) return false;
        }
        return true;
    }

    int nextBeautifulNumber(int n) {
        for (int i = n + 1; i <= 1224444; i++) {
            if (isBalanced(i)) return i;
        }
        return 0;
    }
};
