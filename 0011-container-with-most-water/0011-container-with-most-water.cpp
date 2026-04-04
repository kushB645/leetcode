class Solution {
public:
    int maxArea(vector<int>& height) {
        int left = 0;
        int right = height.size() - 1;
        int maxi = INT_MIN;
        while (left < right) {
            int mini = min(height[left], height[right]);
            int dist = right - left;

            int current = mini * dist;

            maxi = max(maxi, current);

            if (height[left] <= height[right])
                left++;
            else
                right--;
        }
        return maxi;
    }
};