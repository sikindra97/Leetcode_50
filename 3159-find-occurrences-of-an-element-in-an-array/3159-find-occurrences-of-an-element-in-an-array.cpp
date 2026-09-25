class Solution {
public:
    vector<int> occurrencesOfElement(vector<int>& nums, vector<int>& queries, int x) {
        int cnt=0;
         unordered_map<int,int>maps;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==x){
                cnt++;
               maps[cnt]=i;
            }
        }
        vector<int>ans;
        for(int i=0;i<queries.size();i++){
            if(maps.count(queries[i])){
                ans.push_back(maps[queries[i]]);
            }else{
                ans.push_back(-1); 
            }
        
        }
        return ans;

    }
};