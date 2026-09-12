class Solution {
    public List<List<Integer>> zigzagLevelOrder(TreeNode root) {
        List<List<Integer>> ans = new ArrayList<>();

        if(root == null) return ans;

        Queue<TreeNode> q = new LinkedList<>();
        q.offer(root);

        int cnt = 0;

        while(!q.isEmpty()) {
            List<Integer> list = new ArrayList<>();

            int n = q.size();

            for(int i = 0; i < n; i++) {
                TreeNode temp = q.peek();

                list.add(temp.val);
                q.poll();

                if(temp.left != null) {
                    q.offer(temp.left);
                }

                if(temp.right != null) {
                    q.offer(temp.right);
                }
            }

            if(cnt % 2 != 0) {
                Collections.reverse(list);
            }

            ans.add(list);
            cnt++;
        }

        return ans;
    }
}