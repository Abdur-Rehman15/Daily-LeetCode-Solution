class Solution {
public:
    int findClosest(int x, int y, int z) {

        if (x - y == 0)
            return 0;
        int a = abs(z - x);
        int b = abs(z - y);
        if (a == b)
            return 0;
        if (a < b)
            return 1;
        return 2;
    }
};
