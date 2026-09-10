/**
 * Definition for a binary tree node.
 * public class TreeNode {
 *     int val;
 *     TreeNode left;
 *     TreeNode right;
 *     TreeNode() {}
 *     TreeNode(int val) { this.val = val; }
 *     TreeNode(int val, TreeNode left, TreeNode right) {
 *         this.val = val;
 *         this.left = left;
 *         this.right = right;
 *     }
 * }
 */class Solution {

    int ans = 0;

    class Pair {
        int sum;
        int cnt;

        Pair(int sum, int cnt) {
            this.sum = sum;
            this.cnt = cnt;
        }
    }

    Pair find(TreeNode root) {

        if (root == null) {
            return new Pair(0, 0);
        }

        // Left subtree
        Pair leftpair = find(root.left);

        // Right subtree
        Pair rightpair = find(root.right);

        // Current subtree
        int sum = leftpair.sum + rightpair.sum + root.val;

        int cnt = leftpair.cnt + rightpair.cnt + 1;

        int avg = sum / cnt;

        if (root.val == avg) {
            ans++;
        }

        return new Pair(sum, cnt);
    }

    public int averageOfSubtree(TreeNode root) {
        find(root);
        return ans;
    }
}