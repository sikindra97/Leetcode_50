class Solution {
    public int longestSubsequence(int[] nums) {
        int curr = 0;
        boolean allzero = true;

        for (int i = 0; i < nums.length; i++) {
            curr = curr ^ nums[i];

            if (nums[i] != 0) {
                allzero = false;
            }
        }

        if (allzero) {
            return 0;
        }

        if (curr == 0) {
            return nums.length - 1;
        }

        return nums.length;
    }
}