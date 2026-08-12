class Solution {
    boolean solve(int i, int n, int[] nums, int target, int[][] dp) {

        if (target == 0) {
            return true;
        }

        if (i == n || target < 0) {
            return false;
        }

        if (dp[i][target] != -1) {
            return dp[i][target] == 1;
        }

        boolean take = solve(i + 1, n, nums, target - nums[i], dp);

        boolean nottake = solve(i + 1, n, nums, target, dp);

        dp[i][target] = (take || nottake) ? 1 : 0;

        return take || nottake;
    }

    public boolean canPartition(int[] nums) {
        int sum=0;
        for(int i=0;i<nums.length;i++){
            sum+=nums[i];
        }
        if(sum%2!=0){
            return false;
        }
        int target=sum/2;
        int [][]dp=new int[nums.length+1][target+1];
        for(int i=0;i<=nums.length;i++){
            Arrays.fill(dp[i],-1);
        }
        return solve(0,nums.length,nums,target,dp);
    }
}