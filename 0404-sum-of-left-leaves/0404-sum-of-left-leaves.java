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
 */
class Solution {
    int ans=0;
    void solve(TreeNode root,boolean isSelf){
        if(root==null){
            return;
        }
        solve(root.left,true);
        if(root.left==null && root.right==null && isSelf){
            ans+=root.val;
        }
        solve(root.right,false);
    }
    public int sumOfLeftLeaves(TreeNode root) {
        solve(root,false);
        return ans;
    }
}