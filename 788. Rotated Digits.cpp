class Solution {
public:
    int rotatedDigits(int n) {
        int count = 0;
        string temp = "", res = "";
        bool invalid = false;

        for (int i = 1; i <= n; i++) {
            temp = to_string(i);
            res = "";
            invalid = false;
            for (char x : temp) {
                if (x == '3' || x == '4' || x == '7') invalid = true;
                else if (x == '0' || x == '1' || x == '8') res += x;
            }
            if (temp != res && !invalid) {
                count++;
            }
        }
        return count;
    }
};
