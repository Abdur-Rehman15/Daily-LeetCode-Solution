class Solution {
public:
    bool isValid(string s) {
        stack<char> opening;
        bool isOpening = false;
        for (char x : s) {
            if (x == '(' || x == '{' || x == '[') {
                isOpening = true;
                opening.push(x);
            } else {
                if (!opening.empty()) {
                    if (x == ')' && opening.top() == '(' ||
                        (x == '}' && opening.top() == '{') ||
                        (x == ']' && opening.top() == '['))
                        opening.pop();
                    else
                        return false;
                } else
                    return false;
            }
        }
        return opening.empty() && isOpening;
    }
};
