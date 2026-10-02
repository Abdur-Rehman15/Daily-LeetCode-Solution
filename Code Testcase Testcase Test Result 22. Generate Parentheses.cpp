class Solution {
public:
    string generate(vector<string>& combs, string bracket, int n, int o, int c) {
        if (o == n && c == n) {
            combs.push_back(bracket);
            return "";
        }
        if (o < n)
            generate(combs, bracket + "(", n, o + 1, c);
        if (c < o)
            generate(combs, bracket + ")", n, o, c + 1);
        return "";
    }

    vector<string> generateParenthesis(int n) {
        vector<string> combs;
        generate(combs, "", n, 0, 0);
        return combs;
    }
};
