class Solution {
    void reverse(int [][]mat,int row){
        int r=mat[row].length-1;
        int l=0;
        while(l<r){
            int temp=mat[row][l];
            mat[row][l]=mat[row][r];
            mat[row][r]=temp;
            l++;
            r--;
        }
    }
    public void rotate(int[][] matrix) {
        int n=matrix.length;
        int m=matrix[0].length;
        int [][]ans=new int[n][m];
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                ans[i][j]=matrix[j][i];
            }
        }
        for(int i=0;i<n;i++){
            reverse(ans,i);
            
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                matrix[i][j]=ans[i][j];
            }
        }
        
    }
}