
#include <numeric>
#include <algorithm>
class Solution {
public:
const int mod=1000000007;
int solve(int index,vector<int>&nums,int gcd1,int gcd2, vector<vector<vector<int>>>&dp){
    if(index==nums.size()){
        if(gcd1==gcd2 && gcd1!=0){
           return 1;
        }
        else{
            return 0;
        }
    }
    if(dp[index][gcd1][gcd2]!=-1){
        return dp[index][gcd1][gcd2];
    }
    int nottake=solve(index+1,nums,gcd1,gcd2,dp);
    int takeinseq1=solve(index+1,nums,gcd(gcd1,nums[index]),gcd2,dp);
    int takeinseq2=solve(index+1,nums,gcd1,gcd(gcd2,nums[index]),dp);
        return dp[index][gcd1][gcd2]=((nottake + takeinseq1) % mod + takeinseq2) % mod;
}
    int subsequencePairCount(vector<int>& nums) {
        int n=nums.size();
        int maxVal = *max_element(nums.begin(), nums.end());
        vector<vector<vector<int>>>dp(n+1,vector<vector<int>>(maxVal+1,vector<int>(maxVal+1,-1)));
        return solve(0,nums,0,0,dp);
    }
};