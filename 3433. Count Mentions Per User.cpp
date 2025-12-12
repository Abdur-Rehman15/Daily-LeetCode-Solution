class Solution {
public:
    vector<int> countMentions(int numberOfUsers, vector<vector<string>>& events) {
        sort(events.begin(), events.end(), [](const vector<string>& a, const vector<string>& b) {
            int t1 = stoi(a[1]), t2 = stoi(b[1]);
            if (t1 != t2) return t1 < t2;
            return a[0] == "OFFLINE" && b[0] == "MESSAGE";
        });

        vector<int> res(numberOfUsers, 0);
        unordered_map<int, int> OnlineTime;

        for (int i = 0; i < numberOfUsers; i++) { // initialize with times
            OnlineTime[i] = 0;
        }

        for (int i = 0; i < events.size(); i++) {
            if (events[i][0] == "MESSAGE") {
                string mention = events[i][2];
                if (mention == "ALL") {
                    for (int j = 0; j < numberOfUsers; j++) {
                        res[j]++;
                    }
                } 
                else if (mention == "HERE") {
                    int timestamp = stoi(events[i][1]);
                    for (auto [num, val] : OnlineTime) {
                        if (timestamp >= val)
                            res[num]++;
                    }
                } 
                else {
                    for (int i = 2; i < mention.size(); i++) {
                        if (isdigit(mention[i])) {
                            int num = 0;
                            while (i < mention.size() && isdigit(mention[i])) {
                                num = num * 10 + (mention[i] - '0');
                                i++;
                            }
                            res[num]++;
                            i--;
                        }
                    }
                }
            } else {
                int stamp = stoi(events[i][1]);
                int userID = stoi(events[i][2]);
                OnlineTime[userID] = stamp + 60;
            }
        }
        return res;
    }
};
