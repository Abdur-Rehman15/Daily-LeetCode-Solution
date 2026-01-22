class Solution {
public:
    int minimumPairRemoval(vector<int>& nums) {

        int count = 0, minSum = INT_MAX, minIndex = 0;
        while(true){
            bool isSorted = true;
            minSum = INT_MAX;
            for (int i = 0; i < nums.size() - 1; i++) {
                if (nums[i] > nums[i + 1])
                    isSorted = false;
                int sum = nums[i] + nums[i + 1];
                if (sum < minSum) {
                    minSum = sum;
                    minIndex = i;
                }
            }
            if(isSorted) return count;

            nums.erase(nums.begin() + minIndex);
            nums[minIndex] = minSum;
            count++;
        }
        return count;
    }
};
