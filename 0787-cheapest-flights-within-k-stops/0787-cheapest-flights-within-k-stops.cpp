class Solution {
public:
    int findCheapestPrice(int n, vector<vector<int>>& flights, int src, int dst, int k) {
        vector<vector<pair<int,int>>>adj(n);
        for(auto &it:flights){
            adj[it[0]].push_back({it[1],it[2]});

        }
        queue<pair<int,pair<int,int>>>q;
         q.push({0,{src,0}});
         vector<int>cost(n,1e9);
         while(!q.empty()){
          auto it=q.front();
            q.pop();
            int stops=it.first;
            int node=it.second.first;
            int dist=it.second.second;
            if(stops>k) continue;
            for(auto neigh:adj[node]){
                int adjNode=neigh.first;
                int w=neigh.second;
                    if(dist+w<cost[adjNode] && stops<=k){
                        cost[adjNode]=dist+w;
                        q.push({stops+1,{adjNode,dist+w}});
                    }

            }
         }
           return cost[dst] == 1e9 ? -1 : cost[dst];
    }
};