class Solution {
public:
void subset(int index,vector<int>& nums, vector<int>& temp,vector<vector<int>>& ans){
    ans.push_back(temp);
    for(int i=index;i<nums.size();i++)
    {
        temp.push_back(nums[i]);
        subset(i+1,nums,temp,ans);
        temp.pop_back();
    }
}
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int>temp;
        vector<vector<int>>ans;
        subset(0,nums,temp,ans);
        return ans;
    }
};