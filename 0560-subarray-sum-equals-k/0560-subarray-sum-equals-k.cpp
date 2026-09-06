class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
       unordered_map<int,int>maps;
       int ans=0,sum=0;
       maps[0]=1;
       for(int it:nums){
        sum+=it;
        if(maps.find(sum-k)!=maps.end()){
            ans+=maps[sum-k];
        }
        maps[sum]++;
       } 
       return ans;

    }
};