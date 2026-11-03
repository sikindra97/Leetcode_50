import java.util.*;

class Solution {

    int ans = 0;

    void dfs(int node, boolean[] vis, ArrayList<ArrayList<Integer>> adj) {

        vis[node] = true;

        for (int it : adj.get(node)) {
            if (!vis[it]) {
                dfs(it, vis, adj);
            }
        }
    }

    public int findCircleNum(int[][] isConnected) {

        int n = isConnected.length;

        ArrayList<ArrayList<Integer>> adj = new ArrayList<>();

        for (int i = 0; i < n; i++) {
            adj.add(new ArrayList<>());
        }

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {

                if (isConnected[i][j] == 1) {
                    adj.get(i).add(j);
                    adj.get(j).add(i);
                }
            }
        }

        boolean[] vis = new boolean[n];

        for (int i = 0; i < n; i++) {

            if (!vis[i]) {
                ans++;
                dfs(i, vis, adj);
            }
        }

        return ans;
    }
}