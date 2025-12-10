class Solution {
public:
    int countPermutations(vector<int>& complexity) {
        
        int n = complexity.size();
        long count = 1;
        for (long i = 1; i < n; i++) {
            if (complexity[0] >= complexity[i]) return 0;
            count = ((count * i) % 1000000007);
        }
        return count % 1000000007;
    }
};
