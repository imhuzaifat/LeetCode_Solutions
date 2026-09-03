class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxWater = 0, left = 0, right = height.size()-1;
        while (left < right)
        {
            maxWater = max(maxWater, (right-left) * (min(height[left], height[right])));
            height[right] > height[left] ? ++left : --right;
        }
        return maxWater;
    }
};