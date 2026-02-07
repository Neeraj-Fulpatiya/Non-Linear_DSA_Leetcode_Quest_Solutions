class Solution {
public:
int hlpr(int a,int b,int r,int c,vector<vector<int>>&dp){
    if(a==r-1&&b==c-1){
        return 1;
    }
    if(a>=r||b>=c)return 0;
    if(dp[a][b]!=-1){
        return dp[a][b];
    }
    int right=hlpr(a,b+1,r,c,dp);
        int left=hlpr(a+1,b,r,c,dp);
return dp[a][b]=right+left;
}
    int uniquePaths(int m, int n) {
        vector<vector<int>>dp(m,vector<int>(n,-1));

       int path= hlpr(0,0,m,n,dp);
       return path;
    }
};