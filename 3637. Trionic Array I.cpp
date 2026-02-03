class Solution {
public:
    bool isTrionic(vector<int>& nums) {
        bool p = false, q = false;
        int n = nums.size();
        if (nums[0] >= nums[1]) return false;

        for (int i = 0; i < n - 1; i++) {
            if(nums[i] == nums[i+1]) return false;
            
            if (!p && i > 0 && nums[i] >= nums[i + 1]) {
                p = true;
            } else if (!q && p && i < n - 1 && nums[i] <= nums[i + 1]) {
                q = true;
            } else if (p && q && nums[i] >= nums[i + 1]) {
                return false;
            }
        }
        return (p && q && nums[n - 1] > nums[n - 2]);
    }
};
