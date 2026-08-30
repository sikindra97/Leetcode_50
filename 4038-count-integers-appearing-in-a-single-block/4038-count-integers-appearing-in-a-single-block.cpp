class Solution {
public:
    bool solve(vector<int>v){
        if(v.size()==1){
            return true;
        }
        sort(v.begin(),v.end());
        for(int i=1;i<v.size();i++){
            if(v[i-1]+1!=v[i]){
                return false;
            }
        }
        return true;
    }
    int countSpecialIntegers(vector<int>& nums) {
     unordered_map<int,vector<int>>maps;
     for(int i=0;i<nums.size();i++){
        maps[nums[i]].push_back(i);
     }
     int ans=0;
     for(auto it:maps){
        vector<int>v=it.second;
        if(solve(v)){
            ans++;
        }
     }
     return ans;     
    }
};