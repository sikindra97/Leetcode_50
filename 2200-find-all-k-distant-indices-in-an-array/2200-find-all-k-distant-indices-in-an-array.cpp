class Solution {
public:
    vector<int> findKDistantIndices(vector<int>& nums, int key, int k) {
        //i-j<=k && nums[i]==key
        //[3,4,9,1,3,9,5], key = 9, k = 1
        vector<int>ans;
        int n=nums.size();
         for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(nums[j]==key && abs(i-j)<=k){
                ans.push_back(i);
                break;
                }
            }
         }
         return ans;


    }
};