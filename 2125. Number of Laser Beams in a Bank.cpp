class Solution {
public:
    int numberOfBeams(vector<string>& bank) {

        int totalBeams = 0, currCount = 0, prevCount = 0;
        for (string row : bank) {
            for (char x : row) {
                if (x == '1') currCount++;
            }
            if (currCount != 0) {
                if (prevCount != 0) {
                    totalBeams += (prevCount * currCount);
                }
                prevCount = currCount;
            }
            currCount = 0;
        }
        return totalBeams;
    }
};
