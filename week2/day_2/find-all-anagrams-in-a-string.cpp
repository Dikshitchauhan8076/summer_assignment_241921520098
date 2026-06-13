class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int> ans;

        int n = s.size();
        int m = p.size();

        if (m > n) return ans;

        map<char, int> mpP, mpW;
        for (char ch : p)
            mpP[ch]++;
        for (int i = 0; i < m; i++)
            mpW[s[i]]++;

        if (mpP == mpW)
            ans.push_back(0);

        for (int i = m; i < n; i++) {

            mpW[s[i]]++;
            mpW[s[i - m]]--;
            if (mpW[s[i - m]] == 0)
                mpW.erase(s[i - m]);

            if (mpP == mpW)
                ans.push_back(i - m + 1);
        }

        return ans;
    }
};