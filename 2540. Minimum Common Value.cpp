class Solution {
public:
    int getCommon(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> numbers;
        for (int x : nums1) {
            numbers.insert(x);
        }
        for (int x : nums2) {
            if (numbers.find(x) != numbers.end()) return x;
        }
        return -1;
    }
};
