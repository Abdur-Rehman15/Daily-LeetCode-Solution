class Solution {
public:
    bool isValidDirection(vector<int> nums, bool leftStart, int index) {

        int n = nums.size();
        for (int i = index; i < n;) {
            (leftStart) ? i-- : i++;

            if (i < 0 || i > n - 1) {
                for (int x : nums) if (x != 0) return false;    
                return true;
            }

            if (nums[i] > 0) {
                nums[i]--;
                leftStart = !leftStart;
            }
        }
        return false;
    }

    int countValidSelections(vector<int>& nums) {
        int count = 0;
        bool leftStart = true;

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == 0) {
                vector<int> temp = nums;
                if (isValidDirection(temp, leftStart, i)) {
                    count++;
                }
                if (isValidDirection(temp, !leftStart, i)) {
                    count++;
                }
            }
        }
        return count;
    }
};
