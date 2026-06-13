class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        int m = s.size(), n = s.size() / 2 + 1, a = 0;
        bool b = true;
        if (m == 1)
            return false;
        for (int i = 0; i < n; i++) {
            string st = s.substr(a, i + 1);
            for (int j = i + 1; j < m; j += (i + 1)) {
                string st1 = s.substr(j, i + 1);
                if (st1 != st) {
                    b = false;
                    break;
                } else {
                    b = true;
                }
            }
            if (b == true)
                return true;
        }
        return false;
    }
};