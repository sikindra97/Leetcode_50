public class Codec {

    void dfs(TreeNode root, StringBuilder s) {
        if (root == null) {
            s.append("#,");
            return;
        }

        s.append(root.val).append(",");
        dfs(root.left, s);
        dfs(root.right, s);
    }

    public String serialize(TreeNode root) {
        StringBuilder s = new StringBuilder();
        dfs(root, s);
        return s.toString();
    }

    int idx;

    TreeNode build(String[] s) {
        if (s[idx].equals("#")) {
            idx++;
            return null;
        }

        TreeNode root = new TreeNode(Integer.parseInt(s[idx++]));

        root.left = build(s);
        root.right = build(s);

        return root;
    }

    public TreeNode deserialize(String data) {
        String[] s = data.split(",");
        idx = 0;
        return build(s);
    }
}