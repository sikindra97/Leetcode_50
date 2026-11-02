class Solution {
    public int minMergedInteger(int[] nums) {

        int ans = Integer.MAX_VALUE;

        for (int i = 0; i < nums.length; i += 2) {

            StringBuilder s = new StringBuilder();

            s.append(nums[i]);
            s.append(nums[i + 1]);

            int val = Integer.parseInt(s.toString());

            ans = Math.min(ans, val);
        }

        return ans;
    }
}