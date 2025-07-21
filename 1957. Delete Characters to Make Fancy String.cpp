class Solution {
public:
    string makeFancyString(string s) {
        string res = "";
        int count = 0, n = s.size();
        for (int i = 0; i < n; i++) {
            if (count < 2)
                res += s[i];
            if (s[i] == s[i + 1])
                count++;
            else
                count = 0;
        }
        return res;
    }
};
