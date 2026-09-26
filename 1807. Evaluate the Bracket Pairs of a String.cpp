class Solution {
public:
    string evaluate(string s, vector<vector<string>>& knowledge) {
        unordered_map<string, string> knowVal;
        for (int i = 0; i < knowledge.size(); i++) {
            knowVal[knowledge[i][0]] = knowledge[i][1];
        }
        string res = "", temp = "";
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '(') {
                i++;
                temp = "";
                while (s[i] != ')') {
                    temp += s[i];
                    i++;
                }
                if (knowVal.find(temp) == knowVal.end()) {
                    res += "?";
                } else {
                    res += knowVal[temp];
                }
            } else {
                res += s[i];
            }
        }
        return res;
    }
};
