import java.util.*;

class Solution {

    void dfs(int node, List<List<Integer>> adj,
             ArrayList<Integer> component, boolean[] vis) {

        vis[node] = true;
        component.add(node);

        for(int it : adj.get(node)) {
            if(!vis[it]) {
                dfs(it, adj, component, vis);
            }
        }
    }

    public int countCompleteComponents(int n, int[][] edges) {

        List<List<Integer>> adj = new ArrayList<>();
        int ans = 0;

        for(int i = 0; i < n; i++) {
            adj.add(new ArrayList<>());
        }

        for(int i = 0; i < edges.length; i++) {
            int u = edges[i][0];
            int v = edges[i][1];

            adj.get(u).add(v);
            adj.get(v).add(u);
        }

        boolean[] vis = new boolean[n];

        for(int i = 0; i < n; i++) {

            if(!vis[i]) {

                ArrayList<Integer> component = new ArrayList<>();

                dfs(i, adj, component, vis);

                int k = component.size();

                boolean exist = true;

                for(int node : component) {

                    if(adj.get(node).size() != k - 1) {
                        exist = false;
                        break;
                    }
                }

                if(exist) {
                    ans++;
                }
            }
        }

        return ans;
    }
}