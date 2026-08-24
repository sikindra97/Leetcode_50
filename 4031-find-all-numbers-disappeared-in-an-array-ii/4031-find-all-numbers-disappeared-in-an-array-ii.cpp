class Solution {
public:
vector<vector<int>>ans;
vector<int>v;
    vector<vector<int>> findDisappearedNumbers(vector<int>& nums, int lower, int upper) {
        unordered_set<int>maps;
        for(int it:nums){
            maps.insert(it);
        }
        for(int i=lower;i<=upper;i++){
            if(!maps.count(i)){
             v.push_back(i);
            }
        }
        if(v.size()==0){
            return ans;
        }
        int start=v[0];

        for(int i=1;i<v.size();i++){
           if(v[i]!=v[i-1]+1){
            ans.push_back({start,v[i-1]});
            start=v[i];
           }

        }
        int last=v.back();
         ans.push_back({start,last});
         return ans;
    }
};