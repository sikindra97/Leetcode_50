class Solution {
public:
    bool carPooling(vector<vector<int>>& trips, int capacity) { 
        unordered_map<int,int>maps;  
        int lower=INT_MAX;
        int high=INT_MIN;     
        for(auto it:trips){
            int a=it[0];
            int from=it[1];
            int to=it[2];
            maps[from]+=a;
            lower=min(lower,from);
            maps[to]-=a;
            high=max(high,to);
        }
        int pass=0;
        for(int i=lower;i<=high;i++){
            if(maps.count(i)){
                pass+=maps[i];
                if(pass>capacity){
                    return false;
                }
            }


        }
        return true;
    }
};