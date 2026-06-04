class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> num;
        int l=nums.size();
        for(int i=0;i<l;i++){
            num.push_back(nums[i]*nums[i]);
        }
        sort(num.begin(),num.end());
        return num;
    }
};