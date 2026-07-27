class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int highest = INT_MIN, second_highest = INT_MIN;

        for (int x : nums) {
            if (x > highest) {
                second_highest = highest;
                highest = x;
            } else if (x > second_highest) {
                second_highest = x;
            }
        }
        return (highest - 1) * (second_highest - 1);
    }
};
