class Solution {
public:
void solve(int i, vector<int>& candidates, int target, vector<int>& temp,
               vector<vector<int>>& ans){
                if(target==0)
                {
                    ans.push_back(temp);
                    return;
                }
                for(int j=i;j<candidates.size();j++)
                {
                    if(j>i && candidates[j]==candidates[j-1])
                    continue;

                    if (candidates[j] > target) break;

                    temp.push_back(candidates[j]);

                    solve(j+1,candidates,target-candidates[j],temp,ans);

                    temp.pop_back();
                }
               }

    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(), candidates.end());
        vector<int>temp;
        vector<vector<int>>ans;
        solve(0,candidates,target,temp,ans);
        return ans;
    }
};