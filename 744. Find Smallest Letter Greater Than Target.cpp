class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        char smallest = ' ';
        for (char x : letters) {
            if (x > target) {
                if (smallest == ' ')
                    smallest = x;
                else if (smallest > x)
                    smallest = x;
            }
        }
        return (smallest == ' ') ? letters[0] : smallest;
    }
};
