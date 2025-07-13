class Solution {
public:
    int matchPlayersAndTrainers(vector<int>& players, vector<int>& trainers) {
        int i = 0, j = 0, a = players.size(), b = trainers.size();
        int count = 0;
        sort(players.begin(), players.end());
        sort(trainers.begin(), trainers.end());
        while (1) {
            if (i == a || j == b)
                return count;
            if (players[i] <= trainers[j]) {
                count++;
                i++;
                j++;
            } else {
                j++;
            }
        }
        return count;
    }
};
