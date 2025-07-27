class Solution {
public:
    int countHillValley(vector<int>& nums) {
        int count = 0, prev = nums[0], n = nums.size();
        for (int i = 1; i < n-1; i++) {
            if (nums[i] > prev && nums[i] > nums[i + 1]){
                count++;
                prev = nums[i];
            }
            else if (nums[i] < prev && nums[i] < nums[i + 1]){
                count++;
                prev = nums[i];
            }
        }
        return count;
    }
};
