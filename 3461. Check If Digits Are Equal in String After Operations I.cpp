class Solution {
public:
    bool hasSameDigits(string s) {

        string temp = "";
        int size = s.size();
        for (int i = 0; i < s.size() - 1; i++) {
            for (int j = 0; j < size - 1; j++) {
                temp += ((s[j] + s[j + 1]) % 10);
            }
            s = temp;
            temp = "";
        }
        return (s[0] == s[1]);
    }
};
