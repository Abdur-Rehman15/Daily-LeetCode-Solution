class Solution {
public:
    bool isCodeValid(string a) {
        if (a == "")
            return false;
        for (char x : a) {
            if (x >= 'a' && x <= 'z')
                continue;
            if (x >= 'A' && x <= 'Z')
                continue;
            if (x >= '0' && x <= '9')
                continue;
            if (x == '_')
                continue;
            return false;
        }
        return true;
    }

    bool isBusinessValid(string b) {
        return (b == "electronics" || b == "grocery" || b == "pharmacy" || b == "restaurant");
    }

    vector<string> validateCoupons(vector<string>& code, vector<string>& businessLine, vector<bool>& isActive) {

        int n = code.size();
        vector<pair<int, string>> valid;

        unordered_map<string, int> businessOrder = {
            {"electronics", 0},
            {"grocery", 1},
            {"pharmacy", 2},
            {"restaurant", 3}
        };

        for (int i = 0; i < n; i++) {
            if (isActive[i]) {
                if (isBusinessValid(businessLine[i])) {
                    if (isCodeValid(code[i])) {
                        valid.push_back(
                            {businessOrder[businessLine[i]], code[i]});
                    }
                }
            }
        }
        
        vector<string> res;
        sort(valid.begin(), valid.end(), [](const pair<int, string>& a, const pair<int, string>& b) {
                 if (a.first != b.first) {
                     return a.first < b.first;
                 }
                 return a.second < b.second;
             });

        for (auto [num, code] : valid) {
            res.push_back(code);
        }
        return res;
    }
};
