class Solution {
public:
    string removeOuterParentheses(string s) {
        string res = "";
        int opCount = 0, clCount = 0;
        for (char x : s) {
            (x == '(') ? opCount++ : clCount++;
            if (opCount == clCount) {
                opCount = 0;
                clCount = 0;
                continue;
            }
            if (opCount > 1)
                res += x;
        }
        return res;
    }
};
