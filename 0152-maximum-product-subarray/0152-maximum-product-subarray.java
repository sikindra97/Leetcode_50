class Solution {
    public int maxProduct(int[] nums) {
        int n = nums.length;
        int mul = 1;
        int ans = Integer.MIN_VALUE;

        for (int i = 0; i < n; i++) {
            mul *= nums[i];

            ans = Math.max(ans, mul);

            if (mul == 0) {
                mul = 1;
            }
        }

        mul = 1;

        for (int i = n - 1; i >= 0; i--) {
            mul *= nums[i];

            ans = Math.max(ans, mul);

            if (mul == 0) {
                mul = 1;
            }
        }

        return ans;
    }
}