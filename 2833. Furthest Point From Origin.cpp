class Solution {
public:
    int furthestDistanceFromOrigin(string moves) {
        int l = 0, r = 0, u = 0;
        for (char x : moves) {
            if (x == 'L') l++;
            else if (x == 'R') r++;
            else u++;
        }
        return (l == r) ? u : abs(l - r) + u;
    }
};
