class Solution {
public:
int dfs(vector<vector<int>>& matrix, int i, int j,vector<vector<int>>&dp) {
    int n = matrix.size();
    int m = matrix[0].size();
    if(dp[i][j]!=-1) return dp[i][j];
    int path = 1;
    int dx[] = {1, -1, 0, 0};
    int dy[] = {0, 0, 1, -1};
    for (int k = 0; k < 4; k++) {
        int newi = i + dx[k];
        int newj = j + dy[k];
        if (newi >= 0 && newi < n && newj >= 0 && newj < m && matrix[newi][newj] > matrix[i][j]) {
            path = max(path, 1 + dfs(matrix, newi, newj,dp));
        }
    }
    return dp[i][j]=path;
}

int longestIncreasingPath(vector<vector<int>>& matrix) {
    int n = matrix.size();
    int m = matrix[0].size();
    vector<vector<int>>dp(n,vector<int>(m,-1));
    int ans = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            ans = max(ans, dfs(matrix, i, j,dp));
        }
    }
    return ans;
}
};
