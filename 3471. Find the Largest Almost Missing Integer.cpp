class Solution {
public:
    int largestInteger(vector<int>& nums, int k) {
        int largest = -1, n = nums.size();
        unordered_map<int, int> numCount;
        for (int x : nums) numCount[x]++;
        
        if (k == 1) {
            for (const auto& [num, val] : numCount) {
                if (val == 1) largest = max(largest, num);
            }
        }
        else if( k == n) {
            for(int x: nums) largest = max(largest, x);
        }
        else {
            int first = nums[0], last = nums[n-1];
            if (numCount[first] == 1 && numCount[last] == 1)
                largest = max(first, last);
            else if (numCount[first] == 1)
                largest = first;
            else if(numCount[last] == 1)
                largest = last;
        }
        return largest;
    }
};
