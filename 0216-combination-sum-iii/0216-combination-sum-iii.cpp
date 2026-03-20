class Solution {
public:
void help(int i,vector<int>& temp,vector<vector<int>>& ans,int n,int k){
    if(n==0 && temp.size()==k)
    {
        ans.push_back(temp);
        return;
    }
    if(k<0 || temp.size()>k)
    return;
    for(int j=i;j<=9;j++)
    {
        if(j>n)
        break;
        temp.push_back(j);
        help(j+1,temp,ans,n-j,k);
        temp.pop_back();
    }
}

    vector<vector<int>> combinationSum3(int k, int n) {
        vector<int>temp;
        vector<vector<int>>ans;
        help(1,temp,ans,n,k);
        return ans;
    }
};