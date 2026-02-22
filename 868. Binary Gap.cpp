class Solution {
public:
    int binaryGap(int n) {
        bool isOne = false;
        int count = 1, maxi = 0;
        string binary = "";
        while (n != 0) {
            binary += ((n % 2) + '0');
            n /= 2;
        }
        for (int i = 0; i < binary.size(); i++) {
            if (binary[i] == '1') {
                if (isOne) {
                    maxi = max(maxi, count);
                    count = 1;
                }
                isOne = true;
            } else if (isOne) {
                count++;
            }
        }
        return maxi;
    }
};
