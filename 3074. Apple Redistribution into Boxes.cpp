class Solution {
public:
    int minimumBoxes(vector<int>& apple, vector<int>& capacity) {
        int totalPacks = 0;
        for (int x : apple) {
            totalPacks += x;
        }

        int boxes = 0, totalCapacity = 0;
        sort(capacity.begin(), capacity.end(), greater<int>());
        
        for (int x : capacity) {
            totalCapacity += x;
            if (totalCapacity >= totalPacks) return boxes + 1;
            boxes++;
        }
        return boxes;
    }
};
