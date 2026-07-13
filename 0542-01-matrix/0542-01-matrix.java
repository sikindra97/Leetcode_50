class Solution {
    public int[][] updateMatrix(int[][] mat) {
        Queue<int[]>q=new LinkedList<>();
        int n=mat.length;
        int m=mat[0].length;
        boolean [][]vis=new boolean[n][m];
        for(int i=0;i<mat.length;i++){
            for(int j=0;j<mat[0].length;j++){
                if(mat[i][j]==0){
                    q.offer(new int[]{i,j});
                    vis[i][j]=true;
                }
            }
        }
        int [][]ans=new int[n][m];
        while(!q.isEmpty()){
            int []curr=q.poll();
             int r=curr[0];
             int c=curr[1];
             int[] drow = {0, 1, 0, -1};
             int[] dcol = {1, 0, -1, 0};
             for(int i=0;i<4;i++){
                int nrow=r+drow[i];
                int ncol=c+dcol[i];
                if (nrow >= 0 && nrow < n &&
    ncol >= 0 && ncol < m &&
    !vis[nrow][ncol]) {
                    ans[nrow][ncol]=ans[r][c]+1;
                    vis[nrow][ncol]=true;
                    q.offer(new int[]{nrow,ncol});
                }
             }
        }
return ans;
    }
}