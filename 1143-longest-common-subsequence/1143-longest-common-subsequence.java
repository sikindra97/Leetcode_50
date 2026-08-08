class Solution {
    int solve(int idx1,int idx2,int n1,int n2,String text1, String text2,int [][]dp){
        if(idx1==n1 || idx2==n2){
            return 0;
        }
        if(dp[idx1][idx2]!=-1){
            return dp[idx1][idx2];

        }
        if(text1.charAt(idx1)==text2.charAt(idx2)){
            return dp[idx1][idx2]=1+solve(idx1+1,idx2+1,n1,n2,text1,text2,dp);
        }
            return dp[idx1][idx2]=Math.max(solve(idx1+1,idx2,n1,n2,text1,text2,dp),solve(idx1,idx2+1,n1,n2,text1,text2,dp));


    }
    public int longestCommonSubsequence(String text1, String text2) {
        int [][]dp=new int[text1.length()+1][text2.length()+1];
        for (int i = 0; i < text1.length(); i++) {
            Arrays.fill(dp[i], -1);
        }
        return solve(0,0,text1.length(),text2.length(),text1,text2,dp);
    }
}