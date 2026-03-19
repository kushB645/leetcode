class Solution {
public:
    void permu(int index, vector<int>& nums, vector<vector<int>>& ans) {
        if (index >= nums.size()) {
            ans.push_back(nums);
            return;
        }
        for (int i = index; i < nums.size(); i++) {
            swap(nums[index], nums[i]);
            permu(index + 1, nums, ans);
            swap(nums[index], nums[i]);
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<int> temp;
        vector<vector<int>> ans;
        permu(0, nums, ans);
        return ans;
    }
};