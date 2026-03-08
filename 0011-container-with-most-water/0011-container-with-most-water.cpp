class Solution {
public:
    int maxArea(vector<int>& height) {
        int left = 0;
        int right = height.size() - 1;
        int maxarea = 0;
        while (left < right) {
            int h = min(height[left], height[right]);
            int w = right - left;

            int currentarea = h * w;

            maxarea = max(currentarea, maxarea);

            height[left] < height[right] ? left++ : right--;
        }
        return maxarea;
    }
};