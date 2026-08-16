class Solution {
    public int uniquePaths(int m, int n) {
        int [][]arr=new int[m][n];
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(i==m-1 || j==n-1){
                    arr[i][j]=1;
                }else{
                arr[i][j]=0;
            }
            }

        }
        for(int i=m-2;i>=0;i--){
            for(int j=n-2;j>=0;j--){
                arr[i][j]=arr[i][j+1]+arr[i+1][j];
            }
        }
        int ans=arr[0][0];
        return ans;

    }
}