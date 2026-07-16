class Solution {
public:
    int solve(int index, int prevIndex, int n, vector<int>& nums,vector<vector<int>>&dp) {

        if (index == n) {
            return 0;
        }
        if(dp[index][prevIndex+1]!=-1){
            return dp[index][prevIndex+1];
        }

        int nottake = solve(index + 1, prevIndex, n, nums,dp);

        int take = 0;

        if (prevIndex == -1 || nums[index] > nums[prevIndex]) {
            take = 1 + solve(index + 1, index, n, nums,dp);
        }

        return dp[index][prevIndex+1]=max(take, nottake);
    }

    int lengthOfLIS(vector<int>& nums) {
        vector<vector<int>>dp(nums.size()+1,vector<int>(nums.size()+1,-1));
        return solve(0, -1, nums.size(), nums,dp);
    }
};