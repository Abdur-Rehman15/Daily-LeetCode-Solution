class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int val = 0;
        for (string x : operations) {
            ((x[0] == '+') || (x[1] == '+'))
                ? val++
                : val--;
        }
        return val;
    }
};
