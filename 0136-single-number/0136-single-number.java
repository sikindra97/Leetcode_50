class Solution {
    public int singleNumber(int[] nums) {
        int cnt=nums[0];
        for(int i=1;i<nums.length;i++){
            cnt=cnt^nums[i];
        }
        return cnt;

    }
}