class Solution {
public:
    string largestGoodInteger(string num) {
        string res = "";
        int n = num.size(), maxNum = INT_MIN, count = 0;

        if (n < 3)
            return "";

        for (int i = 0; i < n - 1; i++) {
            int temp = num[i];
            while (temp == num[i + 1]) {
                count++;
                i++;
            }
            if (count >= 2) {
                maxNum = max(maxNum, temp);
            }
            count = 0;
        }
        if (maxNum == INT_MIN)
            return "";
        res += (char)maxNum;
        res += (char)maxNum;
        res += (char)maxNum;
        return res;
    }
};
