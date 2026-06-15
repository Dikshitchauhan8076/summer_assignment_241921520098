class Solution {
public:
    string longestPalindrome(string s) {
        int n = s.length();
        if(n <= 1) return s;

        int start = 0, maxLen = 1;

        // Function to expand from the center
        auto expand = [&](int left, int right){
            while(left >= 0 && right < n && s[left] == s[right]){
                left--;
                right++;
            }
            return right - left - 1; // length of palindrome
        };

        for(int i = 0; i < n; i++){
            int len1 = expand(i, i);       // Odd length palindrome
            int len2 = expand(i, i + 1);   // Even length palindrome
            
            int len = max(len1, len2);
            if(len > maxLen){
                maxLen = len;
                start = i - (len - 1) / 2;
            }
        }

        return s.substr(start, maxLen);
    }
};