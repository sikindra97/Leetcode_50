import java.util.*;

class Solution {

    boolean dfs(int node, boolean[] vis, ArrayList<ArrayList<Integer>> adj, int d) {

        if(node == d){
            return true;
        }

        vis[node] = true;

        for(int it : adj.get(node)){

            if(!vis[it]){
                if(dfs(it,vis,adj,d)){
                    return true;
                }
            }
        }

        return false;
    }

    public boolean validPath(int n, int[][] edges, int source, int destination) {

        ArrayList<ArrayList<Integer>> adj = new ArrayList<>();

        for(int i = 0; i < n; i++){
            adj.add(new ArrayList<>());
        }

        for(int i = 0; i < edges.length; i++){

            int u = edges[i][0];
            int v = edges[i][1];

            adj.get(u).add(v);
            adj.get(v).add(u);
        }

        boolean[] vis = new boolean[n];

        return dfs(source, vis, adj, destination);
    }
}