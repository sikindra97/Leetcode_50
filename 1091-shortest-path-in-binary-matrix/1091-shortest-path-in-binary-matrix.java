class Solution {

    // int n, m;
    // int ans = Integer.MAX_VALUE;

    // void solve(int[][] grid, int i, int j, int cnt, boolean[][] vis) {

    //     if (i < 0 || i >= n || j < 0 || j >= m ||
    //         grid[i][j] == 1 || vis[i][j]) {
    //         return;
    //     }

    //     if (i == n - 1 && j == m - 1) {
    //         ans = Math.min(ans, cnt);
    //         return;
    //     }

    //     vis[i][j] = true;

    //     solve(grid, i + 1, j, cnt + 1, vis);
    //     solve(grid, i - 1, j, cnt + 1, vis);
    //     solve(grid, i + 1, j + 1, cnt + 1, vis);
    //     solve(grid, i - 1, j - 1, cnt + 1, vis);
    //     solve(grid, i, j + 1, cnt + 1, vis);
    //     solve(grid, i, j - 1, cnt + 1, vis);
    //     solve(grid, i + 1, j - 1, cnt + 1, vis);
    //     solve(grid, i - 1, j + 1, cnt + 1, vis);

    //     vis[i][j] = false;
    // }

    public int shortestPathBinaryMatrix(int[][] grid) {

       int n = grid.length;
        int m = grid[0].length;
        if (grid[0][0] == 1 || grid[n - 1][m - 1] == 1) {
            return -1;
        }
       Queue<int[]>q=new LinkedList<>();
       q.offer(new int[]{0,0,1});
       grid[0][0]=1;

       int[][] dir = {
            {-1, -1}, {-1, 0}, {-1, 1},
            {0, -1},           {0, 1},
            {1, -1},  {1, 0},  {1, 1}
        };
       while(!q.isEmpty()){
        int []curr=q.poll();
        int i=curr[0];
        int j=curr[1];
        int d=curr[2];
        if(i==n-1 && j==m-1){
            return d;
        }
        for(int []k:dir){
            int nrow=i+k[0];
            int ncol=j+k[1];
            if(nrow>=0 && ncol>=0 && nrow<n && ncol<m && grid[nrow][ncol]==0 ){
                grid[nrow][ncol]=1;
                q.offer(new int[]{nrow,ncol,d+1});
            }
        }

       }
       return -1;
    }

}