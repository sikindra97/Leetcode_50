class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>maps;
        vector<pair<int,int>>vec;
        for(int i=0;i<nums.size();i++){
            maps[nums[i]]++;
        }
        for(auto it:maps){
            vec.push_back({it.first,it.second});
        }
        sort(vec.begin(),vec.end(),[](auto &a, auto &b){
        return a.second >b.second;
    });

 vector<int>ans;
 for(int i=0;i<k;i++){
    ans.push_back(vec[i].first);
 }
 return ans;

    }
};