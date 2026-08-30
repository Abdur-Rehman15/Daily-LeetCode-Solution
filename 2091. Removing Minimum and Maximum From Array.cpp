class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int mini = INT_MAX, maxi = INT_MIN;
        int minIndex = 0, maxIndex = 0;
        int n = nums.size();
        for (int i = 0; i < n; i++) {
            if (nums[i] > maxi) {
                maxi = nums[i];
                maxIndex = i;
            }
            if (nums[i] < mini) {
                mini = nums[i];
                minIndex = i;
            }
        }
        if (maxIndex < minIndex) {
            int dstart = maxIndex + 1;
            int dend = n - minIndex;

            int allFront = minIndex + 1;
            int allBack = n - maxIndex;
            int bothSides = dstart + dend;

            return min({allFront, allBack, bothSides});
        } else {
            int dstart = minIndex + 1;
            int dend = n - maxIndex;

            int allFront = maxIndex + 1;
            int allBack = n - minIndex;
            int bothSides = dstart + dend;

            return min({allFront, allBack, bothSides});
        }

        return -1;
    }
};
