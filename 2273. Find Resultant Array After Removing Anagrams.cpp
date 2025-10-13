class Solution {
public:
    
    vector<string> removeAnagrams(vector<string>& words) {
        int n = words.size();
        vector<string> res;
        vector<unordered_map<char, int>> maps;
        vector<bool> deleted(n, false);
        bool passed = false;

        for (string x : words) {
            unordered_map<char, int> letterCount;
            for (char a : x) {
                letterCount[a]++;
            }
            maps.push_back(letterCount);
        }

        for (int i = 1; i < n; i++) {
            if (words[i].size() != words[i - 1].size() || deleted[i])
                continue;
            
            passed = true;

            for (auto& [letter, count] : maps[i]) {
                if (maps[i - 1].find(letter) == maps[i - 1].end() ||
                    count != maps[i - 1][letter]) {
                    passed = false;
                    break;
                }
            }

            if (passed)
                deleted[i] = true;
        }

        for (int i = 0; i < n; i++) {
            if (!deleted[i]) {
                res.push_back(words[i]);
            }
        }
        return res;
    }
};
