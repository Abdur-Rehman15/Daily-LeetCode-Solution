class Solution {
public:
    int minMoves(vector<int>& nums) {
        int moves = 0, i = 1, n = nums.size();
        sort(nums.begin(), nums.end(), greater<int>());
        while (i < n - 1 && nums[i - 1] == nums[i]) i++;
        for (int j = i; j < n; j++)
            moves += (nums[0] - nums[j]);
        
        return moves;
    }
};
