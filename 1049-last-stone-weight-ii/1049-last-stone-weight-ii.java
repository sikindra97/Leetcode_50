class Solution {

    int solve(int i, int n, int[] stones, int target, int[][] dp) {

        if (i == n) {
            return 0;
        }

        if (dp[i][target] != -1) {
            return dp[i][target];
        }

        // Don't take
        int nottake = solve(i + 1, n, stones, target, dp);

        // Take
        int take = 0;

        if (stones[i] <= target) {
            take = stones[i] +
                   solve(i + 1, n, stones, target - stones[i], dp);
        }

        return dp[i][target] = Math.max(take, nottake);
    }

    public int lastStoneWeightII(int[] stones) {

        int sum = 0;

        for (int i = 0; i < stones.length; i++) {
            sum += stones[i];
        }

        int target = sum / 2;

        int[][] dp = new int[stones.length + 1][target + 1];

        for (int i = 0; i <= stones.length; i++) {
            Arrays.fill(dp[i], -1);
        }

        int best = solve(0, stones.length, stones, target, dp);

        return sum - 2 * best;
    }
}