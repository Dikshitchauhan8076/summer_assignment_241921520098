class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:
        mpp = {}
        left = 0
        maxi = 0

        for right in range(len(s)):
            mpp[s[right]] = mpp.get(s[right], 0) + 1

            # If duplicate found, shrink window
            while mpp[s[right]] > 1:
                mpp[s[left]] -= 1
                left += 1

            maxi = max(maxi, right - left + 1)

        return maxi
