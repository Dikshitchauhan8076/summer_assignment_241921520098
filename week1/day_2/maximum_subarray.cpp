class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int currSum = 0;
        int maxSum = nums[0];

        for (int x : nums) {
            // If current sum becomes negative, start new subarray
            currSum = max(x, currSum + x);

            // Update maximum sum found so far
            maxSum = max(maxSum, currSum);
        }
        return maxSum;
    }
};