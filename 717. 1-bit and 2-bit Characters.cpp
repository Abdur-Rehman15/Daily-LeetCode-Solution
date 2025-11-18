class Solution {
public:
    bool isOneBitCharacter(vector<int>& bits) {

        int i = 0, n = bits.size();
        bool fromOne = false;

        for (; i < n; i++) {
            if (bits[i] == 1) {
                fromOne = true;
                i++;
                continue;
            }
            fromOne = false;
        }
        return !(i > n - 1 && fromOne);
    }
};
