class Solution {
public:
    int smallestNumber(int n) {
        string binary = "";
        int a = 0, answer = 0;
        while (n > 0) {
            a++;
            n /= 2;
        }
        for (int i = 0, j = a - 1; i < a; i++, j--) {
            answer += (pow(2, j));
        }
        return answer;
    }
};
