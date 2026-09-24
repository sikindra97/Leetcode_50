class Solution {
public:

int digitsum(int n){
int ans=0;
    while(n){
        int rem=n%10;
        ans+=rem;
        n=n/10;
    }
    return ans;


}
    int smallestIndex(vector<int>& nums) {
       
        for(int i=0;i<nums.size();i++){
            if(digitsum(nums[i])==i){
                return i;
             
            }
        }
        return -1;
    }
};