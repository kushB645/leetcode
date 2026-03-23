class Solution {
public:
double raja_ka_knight(int n,int k,int row,int column, vector<vector<vector<double>>>& dp)
{
    if (row < 0 || column < 0 || row >= n || column >= n)
    return 0;


    if(k==0)
    return 1;

    if(dp[k][row][column]!=-1)
    return dp[k][row][column];

    double ans=0;

    double a1=raja_ka_knight(n,k-1,row-2,column-1,dp);
    double a2=raja_ka_knight(n,k-1,row-2,column+1,dp);
    double a3=raja_ka_knight(n,k-1,row-1,column+2,dp);
    double a4=raja_ka_knight(n,k-1,row+1,column+2,dp);
    double a5=raja_ka_knight(n,k-1,row+2,column+1,dp);
    double a6=raja_ka_knight(n,k-1,row+2,column-1,dp);
    double a7=raja_ka_knight(n,k-1,row+1,column-2,dp);
    double a8=raja_ka_knight(n,k-1,row-1,column-2,dp);
    
     ans=(a1+a2+a3+a4+a5+a6+a7+a8)/8.0;
    return dp[k][row][column]=ans;
}
    double knightProbability(int n, int k, int row, int column) {
        vector<vector<vector<double>>> dp(
    k+1, vector<vector<double>>(n, vector<double>(n, -1))
);
        return raja_ka_knight(n,k,row,column,dp);
    }
};