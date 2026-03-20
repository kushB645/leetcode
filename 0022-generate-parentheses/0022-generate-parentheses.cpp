class Solution {
public:
void isvalid(int n,int open,int close,string temp, vector<string>& ans)
{
    if(temp.length()==2*n)
    {
        ans.push_back(temp);
        return;
    }

    if(open<n)
    isvalid(n,open+1,close,temp+'(',ans);

    if(close<open)
    isvalid(n,open,close+1,temp+')',ans);
}
    vector<string> generateParenthesis(int n) {
        vector<string>ans;
        isvalid(n,0,0,"",ans);
        return ans;
    }
};