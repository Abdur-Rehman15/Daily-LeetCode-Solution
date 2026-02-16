class Solution {
public:
    int reverseBits(int n) {
        string binary = "";
        int count = 32, res = 0;
        for (int i = 0; i < 32; i++) {
            if (n != 0) {
                binary += (n % 2) + '0';
                n /= 2;
                continue;
            }
            binary += '0';
        }

        for (int i = 0, j = 31; i < binary.size(); i++, j--) {
            if (binary[i] == '0') continue;
            res += pow(2, j);
        }
        return res;
    }
};
