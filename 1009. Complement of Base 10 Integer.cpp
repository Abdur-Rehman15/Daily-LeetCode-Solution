class Solution {
public:
    int bitwiseComplement(int n) {
        int res = 0, pos = 0;
        if(n == 0) return 1;
        while (n != 0) {
            int bit = n & 1;
            bit ^= 1;
            res |= (bit << pos);
            pos++;
            n = n >> 1;
        }
        return res;
    }
};
