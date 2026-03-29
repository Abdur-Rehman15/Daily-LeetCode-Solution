class Solution {
public:
    bool canBeEqual(string s1, string s2) {
        unordered_set<string> combs;
        queue<string> temp;

        temp.push(s1);
        combs.insert(s1);
        while (!temp.empty()) {
            string curr = temp.front();
            temp.pop();

            for (int i = 0; i < 2; i++) {
                string s3 = curr;
                swap(s3[i], s3[i + 2]);
                if (combs.find(s3) == combs.end()) {
                    combs.insert(s3);
                    temp.push(s3);
                }
            }
        }

        for (string x : combs) {
            if (x == s2)
                return true;
        }
        
        return false;
    }
};
