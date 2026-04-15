class Solution {
public:
    int closestTarget(vector<string>& words, string target, int startIndex) {
        int closest = INT_MAX, n = words.size();
        if(words[startIndex]==target) return 0;

        for (int i = startIndex, k=startIndex, count1 = 1, count2=1, j = 0; j < n; i++, j++, k--) {
            if (words[(i + 1) % n] == target) {
                closest = min(closest, count1);
            }
            if (words[(k - 1 + n) % n] == target) {
                closest = min(closest, count2);
            }
            count1++;
            count2++;
        }
        return (closest == INT_MAX) ? -1 : closest;
    }
};
