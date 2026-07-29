class Solution {
public:
    int maximumPopulation(vector<vector<int>>& logs) {
        map<int,int>maps;
        for(auto it:logs){
            maps[it[0]]++;
            maps[it[1]]--;

        }
        int maximum=0;
        int curr=0;
        int ans=0;
        for(auto it:maps){
            curr+=it.second;
            if(maximum<curr){
                maximum=curr;
                ans=it.first;
            }
        }
        return ans;
    }
};