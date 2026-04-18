class Solution {
public:
    int mirrorDistance(int n) {
        string temp = to_string(n);
        reverse(temp.begin(), temp.end());
        return abs(n - stoi(temp));
    }
};
