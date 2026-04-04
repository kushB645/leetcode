class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> ans;
        sort(nums.begin(), nums.end());

        for (int last = nums.size() - 1; last >= 2; last--) {
            int left = 0;
            int right = last - 1;

            if (last < nums.size() - 1 && nums[last] == nums[last + 1]) {
                continue;
            }

            while (left < right) {
                int sum = nums[left] + nums[right] + nums[last];
                if (sum == 0) {
                    ans.push_back({nums[left], nums[right], nums[last]});

                    left++;
                    right--;

                    while (left < right && nums[left] == nums[left - 1]) {
                        left++;
                    }
                    while (left < right && nums[right] == nums[right + 1]) {
                        right--;
                    }
                }

                else if (sum < 0) {
                    left++;
                }

                else {
                    right--;
                }
            }
        }
        return ans;
    }
};