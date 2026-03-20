class Solution {
public:
void help(int i,vector<int>& temp,vector<vector<int>>& ans,int n,int k)
{
    if(temp.size()==k){
        ans.push_back(temp);
        return;
    }
    if(k<0 || temp.size()>k)
    return;

    for(int j=i;j<=n;j++)
    {
        if(j>n)
        break;
        temp.push_back(j);
        help(j+1,temp,ans,n,k);
        temp.pop_back();
    }
}
    vector<vector<int>> combine(int n, int k) {
        vector<int>temp;
        vector<vector<int>>ans;
        help(1,temp,ans,n,k);
        return ans;
    }
};