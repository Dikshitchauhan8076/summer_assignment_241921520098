class Solution {
public:
    string reverseWords(string s) {
        string st = "", ans = "";

        for (int i = 0; i < s.size(); i++) {
            if (s[i] == ' ') {
                reverse(st.begin(), st.end());
                ans += st;
                ans += ' ';
                st = "";
                continue;
            }
            if (i == s.size() - 1) {

                st += s[i];
                reverse(st.begin(), st.end());
                ans += st;
                break;
            }
            st += s[i];
        }
        return ans;
    }
};