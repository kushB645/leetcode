class Solution {
public:
bool issafe(int row,int col,vector<string>& temp,int n)
{
    int i,j;
    i=row;
    j=col;
    while(j>=0)
    {
        if(temp[i][j]=='Q')
        return false;
        j--;
    }

    i=row;
    j=col;
    while(i>=0&&j>=0)
    {
        if(temp[i][j]=='Q')
        return false;
        i--;
        j--;
    }

    i=row;
    j=col;
    while(i<n && j>=0)
    {
        if(temp[i][j]=='Q')
        return false;
        i++;
        j--;
    }
    return true;
};
void queen(int n,vector<string>& temp,vector<vector<string>>& ans, int col){
    if(col==n){
        ans.push_back(temp);
        return;
    }

    for(int row=0;row<n;row++)
    {
        if(issafe(row,col,temp,n)){
            temp[row][col]='Q';
            queen(n,temp,ans,col+1);
            temp[row][col]='.';
        }
    }
}
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>>ans;
        vector<string>temp(n, string(n, '.'));

        queen(n,temp,ans,0);
        return ans;
    }
};