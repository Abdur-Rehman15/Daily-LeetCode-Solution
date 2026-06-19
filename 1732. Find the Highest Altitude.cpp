class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int highest = 0, altitude = 0;
        for (int x : gain) {
            altitude += x;
            highest = max(highest, altitude);
        }
        return highest;
    }
};
