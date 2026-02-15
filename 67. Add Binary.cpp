class Solution {
public:
    string addBinary(string a, string b) {
        bool carry = false;
        string res = "";
        int i = a.size() - 1, j = b.size() - 1;
        while (i >= 0 || j >= 0) {
            if (i >= 0 && j >= 0) {
                if (a[i] == '1' && b[j] == '1') {
                    if (carry) {
                        res += '1';
                    } else {
                        carry = true;
                        res += '0';
                    }
                } else if (a[i] == '1' || b[j] == '1') {
                    (carry) ? res += '0' : res += '1';
                } else {
                    if (carry) {
                        carry = false;
                        res += '1';
                    } else {
                        res += '0';
                    }
                }
            } else if (i >= 0) {
                if (carry) {
                    if (a[i] == '1') {
                        res += '0';
                    } else {
                        res += '1';
                        carry = false;
                    }
                } else {
                    res += a[i];
                }
            } else {
                if (carry) {
                    if (b[j] == '1') {
                        res += '0';
                    } else {
                        res += '1';
                        carry = false;
                    }
                } else {
                    res += b[j];
                }
            }
            i--;
            j--;
        }
        if (carry) {
            res += '1';
        }
        reverse(res.begin(), res.end());

        return res;
    }
};
