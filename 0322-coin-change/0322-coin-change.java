class Solution {
    int solve(int []coins,int amount,int []dp){
        if(amount==0){
            return 0;
        }
     if(amount<0){
        return Integer.MAX_VALUE;
     }
     if(dp[amount]!=-1){
        return dp[amount];
     }
     int ans=Integer.MAX_VALUE;
     for(int coin:coins){
         int res=solve(coins,amount-coin,dp);
         if(res!=Integer.MAX_VALUE){
            ans=Math.min(ans,res+1);
         }
     }
     dp[amount]=ans;
     return dp[amount];
 }
     public int coinChange(int[] coins, int amount) {
        int []dp=new int[amount+1];
        Arrays.fill(dp, -1);
       int ans=solve(coins,amount,dp);
       if(ans==Integer.MAX_VALUE){
             return -1;
       }
       return ans;
     }
}