class Solution {
public:
    int findLucky(vector<int>& arr) {

        unordered_map<int, int> numCount;
        for (int x : arr) {
            numCount[x]++;
        }
        int largest = -1;
        for (int i = 0; i < arr.size(); i++) {
            if (arr[i] == numCount[arr[i]]) {
                largest = max(largest, arr[i]);
            }
        }
        return largest;
    }
};
