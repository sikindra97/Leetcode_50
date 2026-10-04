class Solution {
public:
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        int v=numCourses;
        vector<vector<int>>adj(v);
        vector<int>deg(v,0);
        for(auto it:prerequisites){
            int u=it[0];
            int v=it[1];
            adj[v].push_back(u);
            deg[u]++;
        }
        queue<int>q;
        vector<int>ans;
        for(int i=0;i<v;i++){
        if(deg[i]==0){
            q.push(i);
        }
        }
        while(!q.empty()){
            int node=q.front();
            q.pop();
            ans.push_back(node);
            for(auto it:adj[node]){
                deg[it]--;
                if(deg[it]==0){
                    q.push(it);
                }
            }
        }

return ans.size()==v;
    }
};