class Solution {
public:
    int bestClosingTime(string customers) {

        int minPenalty = INT_MAX;
        int n = 0, y = 0, hour = 0;
        for (int i = 0; i < customers.size(); i++) {
            if (customers[i] == 'Y')
                y++;
        }
        for (int i = 0; i < customers.size(); i++) {
            int penalty = y + n;
            if (penalty < minPenalty) {
                minPenalty = penalty;
                hour = i;
            }
            (customers[i] == 'N') ? n++ : y--;
        }
        return (n < minPenalty) ? customers.size() : hour;
    }
};
