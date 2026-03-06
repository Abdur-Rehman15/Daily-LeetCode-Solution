class Solution {
public:
    bool checkOnesSegment(string s) {
        bool isOne = false, repeat = false;
        for (char x : s) {
            if (x == '1') {
                if (!isOne)
                    isOne = true;
                else if (repeat)
                    return false;
            }
            if (isOne && x == '0') {
                repeat = true;
            }
        }
        return isOne;
    }
};
