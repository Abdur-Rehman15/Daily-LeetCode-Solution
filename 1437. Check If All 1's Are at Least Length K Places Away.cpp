class Solution {
public:
    bool kLengthApart(vector<int>& nums, int k) {

        int count = 0;
        bool isFirst = false;
        for (int x : nums) {
            if (x == 1) {
                if (count < k && isFirst) {
                    return false;
                }
                count = 0;
                isFirst = true;
                continue;
            }
            count++;
        }
        return true;
    }
};
