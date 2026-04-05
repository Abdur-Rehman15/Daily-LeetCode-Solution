class Solution {
public:
    bool judgeCircle(string moves) {
        unordered_map<char, int> m;
        for (char x : moves)  m[x]++;
        return (m['L'] == m['R'] && m['U'] == m['D']);
    }
};
