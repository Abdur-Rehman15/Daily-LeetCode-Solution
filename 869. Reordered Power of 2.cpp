class Solution {
public:
    bool reorderedPowerOf2(int n) {
        unordered_map<int, int> numCount;
        int nums = 0, tempNums = 0;
        bool isFound = true;

        while (n != 0) {
            numCount[n % 10]++;
            n /= 10;
            nums++;
        }

        long long constraint=9;
        for(int i=1;i<nums;i++){
            constraint*=10;
            constraint+=9;
        }

        for (int i = 0;; i++) {
            long long temp = pow(2, i);
            if (temp > constraint)
                break;
            unordered_map<int, int> tempCount;
            tempNums = 0;
            isFound = true;
            while (temp != 0) {
                tempCount[temp % 10]++;
                temp /= 10;
                tempNums++;
            }
            if (tempNums != nums)
                continue;
            for (auto [num, count] : tempCount) {
                if (numCount[num] != count) {
                    isFound = false;
                    break;
                }
            }
            if (isFound)
                return true;
        }
        return false;
    }
};
