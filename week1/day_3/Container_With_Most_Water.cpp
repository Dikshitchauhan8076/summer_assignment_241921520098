class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();
        int st = 0, maxi = 0, area;
        int ed = n - 1;
        while (st < ed) {
            area = min(height[st], height[ed]) * (ed - st);
            maxi = max(area, maxi);
            if (height[st] < height[ed]) {
                st++;
            } else
                ed--;
        }
        return maxi;
    }
};