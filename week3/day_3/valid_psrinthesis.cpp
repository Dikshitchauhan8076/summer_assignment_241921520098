class Solution {
public:
    bool isValid(string s) {
        stack<char> n;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '(' || s[i] == '[' || s[i] == '{') {
                n.push(s[i]);

            }

            else {
                if (n.empty()) {
                    return false;
                }

                if (s[i] == ')' && n.top() == '(' ||
                    s[i] == ']' && n.top() == '[' ||
                    s[i] == '}' && n.top() == '{') {
                    n.pop();
                } else {
                    return false;
                }
            }
        }
        return n.empty();
    }
};