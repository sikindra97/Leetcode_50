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
       int maxi=Integer.MIN_VALUE;
    int solve(TreeNode root){
        if(root==null){
            return 0;
        }
        int left=Math.max(0,solve(root.left));
        int right=Math.max(0,solve(root.right));
    int currpath=root.val+left+right;
    maxi=Math.max(maxi,currpath);
    return Math.max(left,right)+root.val;
    }
    public int maxPathSum(TreeNode root) {
  
       solve(root);
       return maxi;
       
        
    }
}