class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        unordered_set<int> exist;
        int multiple = k;
        for (int x : nums) {
            exist.insert(x);
        }
        do {
            if (exist.find(multiple) == exist.end())
                return multiple;
        } while (multiple += k);
        
        return 0;
    }
};
