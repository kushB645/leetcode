class Solution {
public:
    void solve(int index,vector<int>& nums,vector<int>& temp,vector<vector<int>>& ans){
    ans.push_back(temp);
     for (int i = index; i < nums.size(); i++) {
            // skip duplicates
            if (i > index && nums[i] == nums[i - 1]) continue;
//it check same element on same level
            temp.push_back(nums[i]);
            solve(i + 1, nums, temp, ans);
            temp.pop_back();
        }
};
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<int> temp;
        vector<vector<int>> ans;

        solve(0, nums, temp, ans);
        return ans;
    }
};