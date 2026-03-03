class Solution {
public:
    char findKthBit(int n, int k) {
        string res = "0", temp = "0";
        
        for (int i = 1; i < n; i++) {
            res = (temp + "1");

            for (int j = 0; j < temp.size(); j++) {
                if (temp[j] == '0') temp[j] = '1';
                else temp[j] = '0';
            }

            reverse(temp.begin(), temp.end());
            res += temp;
            temp = res;
        }
        
        return res[k - 1];
    }
};
