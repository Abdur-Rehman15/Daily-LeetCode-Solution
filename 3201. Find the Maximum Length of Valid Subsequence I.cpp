class Solution {
public:
    int maximumLength(vector<int>& nums) {
        int n = nums.size();
        if (n == 0) return 0;
        if (n == 1) return 1;
        
        int maxLen = 1; 
        
        // all even or all odd
        int evenCount = 0, oddCount = 0;
        for (int num : nums) {
            if (num % 2 == 0) evenCount++;
            else oddCount++;
        }
        maxLen = max(maxLen, max(evenCount, oddCount));
        
        // even odd
        int evenOddLen = 0;
        bool expectEven = true;
        for (int num : nums) {
            if ((num % 2 == 0) == expectEven) {
                evenOddLen++;
                expectEven = !expectEven;
            }
        }
        maxLen = max(maxLen, evenOddLen);
        
        // odd even
        int oddEvenLen = 0;
        bool expectOdd = true;
        for (int num : nums) {
            if ((num % 2 == 1) == expectOdd) {
                oddEvenLen++;
                expectOdd = !expectOdd;
            }
        }
        maxLen = max(maxLen, oddEvenLen);
        
        return maxLen;
    }
};
