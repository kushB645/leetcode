class Solution {
public:
    bool ispossible(vector<int>& nums, int days, int limit) {
        int newday = 1;
        int weight = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (weight + nums[i] <= limit) {
                weight += nums[i];
            } else {
                weight = nums[i];
                newday++;
            }
        }
        return newday <= days;
    }
    int shipWithinDays(vector<int>& nums, int days) {
        int low = *max_element(nums.begin(), nums.end());
        int high = accumulate(nums.begin(), nums.end(), 0);
        int ans = 0;
        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (ispossible(nums, days, mid)) {
                ans = mid;
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        return ans;
    }
};