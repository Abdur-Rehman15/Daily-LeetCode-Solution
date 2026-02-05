class Solution {
public:
    vector<int> constructTransformedArray(vector<int>& nums) {
        vector<int> res;
        int n = nums.size();
        for (int i = 0; i < n; i++) {
            if (nums[i] > 0) {
                res.push_back(nums[(i + nums[i]) % (n)]);
            } 
            else if (nums[i] < 0) {
                int index = i + nums[i];
                while (index < 0) index += n;
                res.push_back(nums[index % n]);
            } 
            else {
                res.push_back(nums[i]);
            }
        }
        return res;
    }
};
