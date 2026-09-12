class Solution {

    int solve(TreeNode root) {
        if(root == null) {
            return 0;
        }

        int left = solve(root.left);
        int right = solve(root.right);

        return 1 + Math.max(left, right);
    }

    public int findBottomLeftValue(TreeNode root) {

        Queue<TreeNode> q = new LinkedList<>();
        q.offer(root);

        int size = solve(root);
        int ans = 0;
        int cnt = 0;

        while(!q.isEmpty()) {

            cnt++;

            int n = q.size();

            for(int i = 0; i < n; i++) {

                TreeNode temp = q.poll();

                if(cnt == size && i == 0) {
                    ans = temp.val;
                }

                if(temp.left != null) {
                    q.offer(temp.left);
                }

                if(temp.right != null) {
                    q.offer(temp.right);
                }
            }
        }

        return ans;
    }
}