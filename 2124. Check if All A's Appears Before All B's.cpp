class Solution {
public:
    bool checkString(string s) {
        bool isB = false;
        for (char x : s) {
            if (isB && x == 'a') return false;
            if (x == 'b') isB = true;
        }
        return true;
    }
};
