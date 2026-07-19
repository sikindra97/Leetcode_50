class Solution {
public:
int target;
bool solve(int index,int currsum,vector<int>&nums,vector<vector<int>>&dp){
    if(currsum==target){
        return true;
    }
    if(index==nums.size()){
        return false;
    }
    if(currsum>target){
        return false;
    }
    if(dp[index][currsum]!=-1){
        return dp[index][currsum];
    }
    bool take=solve(index+1,currsum+nums[index],nums,dp);
    bool nottake=solve(index+1,currsum,nums,dp);
  return dp[index][currsum]=(take||nottake);
}
    bool canPartition(vector<int>& nums) {
       int totalsum=0;
        int n=nums.size();
       for(int it:nums){
        totalsum+=it;
       }
       if(totalsum%2!=0){
         return false;
       }
       target=totalsum/2;
       vector<vector<int>>dp(n+1,vector<int>(target+1,-1));

       return solve(0,0,nums,dp);

    }
};